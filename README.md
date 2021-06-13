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

 
 ![enter image description here](https://lh3.googleusercontent.com/SdYog1YMQ61xKBJGDC7C-hVVtwWkafbfP3iZ91SmSADd_qfJ24lnB3PB26W7iqWFcpJq37LAGzb8BcXIq_63PbGd6OSSk-6AlU3Oq11QFwzXnTTu58GI83cMPMZmGWML5Tf8evubjM8Yq2Wq00ewRy4UAIWJnpZwWSI8DpvLSYKiCdVty06RpkXF36vBNvzMStpLxhu4Ua2o7BNXjgUNxgcUVk7PRbSSbdsNbqTXyzBz5hKMlpdkE_GObUURZhiW8DLWyQJ5rSwlVyARMpwFnOI1SPtRmyDPLDWR2AMW2-XZ67Mw7FDQyhGp1wZW8kVrUJ4lD8kXx5l9wMwtL_O_Pc9WMJ7eV6-AhGW0d-cOBMHFH6Mk7PuQkQwSLBxleoSEmZ4eQdiHj3aCK3otACIf_OxzgJjtH66wDdW-C1LE4siO5S1gVwphS2o6v-4NVZRnwUPX06bmRlSnzEBvlq_lYlu68-BV_aplKVc4tyJmXqGEOS2VxD-SA8tO4xptD7CDY6CEbZzHzKAzqI45iDNjIWj8So196dgtyKftlN6TEin2gsiXagQw6HY4IZKGQ7hQf_x0s0IZZLrKSsYNWFoA0aVF3EVNkdieHVvBi_mb9oOEVIPpr_ipB_qx2N_yn6Wva5Iz43B1uukMYxkLIgsAZgaCVFB26m_N4bXeUJ9d0mIMIdkEkG8745fok2pTeLqM06oRvh78tncfb6iKvQKymumxyg=w839-h804-no?authuser=0)


 

    

