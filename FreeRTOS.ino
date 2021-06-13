#if CONFIG_FREERTOS_UNICORE
#define ARDUINO_RUNNING_CORE 0
#else
#define ARDUINO_RUNNING_CORE 1
#endif

//libs
#include "GY521.h"
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET     4
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define NUMFLAKES     10
#define LOGO_HEIGHT   16
#define LOGO_WIDTH    16


GY521 sensor(0x69);
double   X = 0;
double   Y = 0 ;
double   Z = 0 ;
double V = 0;
double U = 0 ;


void setup() {

  Serial.begin(115200);
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }
  display.display();
  delay(2000); // Pause for 2 seconds
  display.clearDisplay();
  Serial.println(__FILE__);
  delay(100);
  while (sensor.wakeup() == false)
  {
    Serial.print(millis());
    Serial.println("\tCould not connect to GY521");
    delay(1000);
  }
  sensor.setAccelSensitivity(0);  // 8g
  sensor.setGyroSensitivity(0);   // 500 degrees/s

  sensor.setThrottle();
  Serial.println("start...");


  sensor.axe = 0.170;
  sensor.aye = -0.001;
  sensor.aze = 1.005;
  sensor.gxe = -0.144;
  sensor.gye = 1.699;
  sensor.gze = -0.143;

  /////////////////////////////
  xTaskCreatePinnedToCore(
    MPU6050
    ,  "mpu"
    ,  10240
    ,  NULL
    ,  1
    ,  NULL
    ,  ARDUINO_RUNNING_CORE);

  xTaskCreatePinnedToCore(
    LCD
    ,  "1602"
    ,  10240
    ,  NULL
    ,  2
    ,  NULL
    ,  ARDUINO_RUNNING_CORE);


}

void loop()
{

}
void MPU6050(void *pvParameters)
{
  int cin = 0;
  (void) pvParameters;

  for (;;)
  {
    sensor.read();
    X = (sensor.getAccelX() * 10);
    Y = (sensor.getAccelY() * 10);
    Z = (sensor.getAngleZ() * 10);

    if (Y >= 1 || Y <= -1) {
      V = Y * 0.1 + U ;
      U = V;
      cin = 0;
    }

    else
    {
      if (cin == 4 )
        if (V > 1) {
          V = V / 2;
          U = V;
          cin = 0;
        }
        else {
          V = 0;
          U = V;
        }
      cin++;
    }
    Serial.print(X, 3);
    Serial.print('\t');
    Serial.print(Y, 3);
    Serial.print('\t');
    Serial.print(Z, 3);
    Serial.print('\t');
    Serial.print(V, 3);
    Serial.println();
    delay(50);

  }
}

void LCD(void *pvParameters)
{
  (void) pvParameters;

  for (;;)
  {
    Wire.setClock(3200000);
    String V1 = String(V * 3.6 , 1 );
    String Y1 = String(Y , 2 );

    alarm(1);
    alarm(2);

    delay(100);
  }
}
void oled(String text, int x, int y, int size, boolean d) {

  display.setTextSize(size);
  display.setTextColor(WHITE);
  display.setCursor(x, y);
  display.println(text);
  if (d) {
    display.display();
  }

  //delay(100);
}
void alarm(int a)
{
  String V1 = String(V * 3.6 , 1 );
  String Y1 = String(Y , 2 );
  if (a == 1)
  {
    display.clearDisplay();
    oled(V1, 1, 3, 1, false);
    oled(Y1, 50, 3, 1, false);
    oled("km", 1, 12, 1, false);
    oled("m", 50, 12, 1, false);
    oled("h", 1, 21, 1, false);
    oled("s2", 50, 21, 1, false);
    display.display();
    delay(1000);
  }
  if (a == 2)
  {
    if (V > 50.0)
    {
      display.clearDisplay();
      oled("Over", 1, 3, 1, false);
      display.display();
      delay(1000);
    }
  }
}
