# Speedometer ESP32 project
 *Thanks Mr.H3 for teaching us*

    

> Our Team : 
     Bùi Đức Hiền ,
    Phạm Minh Quân ,
    Phan Thị Mai Linh , 
    Lê Trung Kiên .
> 
This project base on arduino and esp32 
## Requirement

 - A modern PC / Laptop
 - ESP32 board
 -  MPU-6050 - Accelerometer and Gyro (GY-521)
 - 128x32 I2C OLED graphic display
 - Testboard and jumper
## Install Software

> 1. install Adruno IDE 
> 2. install ESP32 SDK
> 3. install other component libraries
> 4. code and deploy

**Install Adruno IDE**
    

 - go to [this](https://www.microsoft.com/en-hk/p/arduino-ide/9nblggh4rsd8?ocid=badge&rtc=1&activetab=pivot:overviewtab) download and install IDE
 
**ESP32 SDK**
    
 - Open Arduino IDE / File / Preferences / 
        paste : 
   

>      https://dl.espressif.com/dl/package_esp32_index.json
>      http://arduino.esp8266.com/stable/package_esp8266com_index.json
>      https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_dev_index.json

    

at Additional Boards Manager URLs
 -  Open Arduino IDE / Tools / Boards /  Boards Manager -> find Esp32 and install
 
**Install Libs**
 - copy folder libraries to `Documents\Arduino\libraries`
 
**Code and play**
 - Open `FreeRTOS.ino` and flash to your `ESP32`
 ## Circuits 

     SDA --> 21  
     SCL --> 22  
     AD0 = VI0 --> VCC

 
 ![enter image description here](https://www.mediafire.com/view/hn11peuml7u9ujd)


 

    

