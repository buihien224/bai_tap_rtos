#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2
double count=0;
#define LOGO16_GLCD_HEIGHT 32
#define LOGO16_GLCD_WIDTH  128 


#if (SSD1306_LCDHEIGHT != 32)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup()   {                
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
  display.display();
  delay(2000);
  display.clearDisplay(); 
}


void loop() {
  display.clearDisplay();
  robojaxText("Voltage:          ", 4, 3, 1, false);
  robojaxText(vString, 72, 3, 1, false);
  robojaxText("V", 110, 3, 1, false);
  robojaxText("Temprature: 32C", 4, 11, 1, false);
  robojaxText("Capacity:   92.86L", 4, 21, 1, false);
  //display.drawLine(1, 37, 100, 37, WHITE);
 display.drawRect(1, 1, 126,31, WHITE);
 display.display();
delay(2000); 
}
void hien(String text, int x, int y,int size, boolean d) {

  display.setTextSize(size);
  display.setTextColor(WHITE);
  display.setCursor(x,y);
  display.println(text);
  if(d){
    display.display();
  }
}
