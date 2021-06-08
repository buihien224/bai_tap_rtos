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

 
 ![enter image description here](https://lh3.googleusercontent.com/n9cDuh9T4VUcZJ570AFLdtYbsWdArTD-ohNyLh2I3eS8uXqOjhZfT9Ty7KZigFzF__zsG2TJf55QbrQWgAhm2cUrpXf61r_yjC2f4KZ5cATy3NuEMNAxlQzf0Knr0bM7RKL18oFWF-0x700xgEu0TAE80hp-CXNU9EO9wLDQVeZqSSDQsF_g_Zi_E-bKlxKEOSC1Q-DS8YPpJSKuPS8PETcAS6x-SLT5PKzytNg2K_Rl2v3VBrWi0UWk5TYMxPfWefDHAjI0vA1qQ6HAM7wRNTAy_AUe6kpVob2W_e5Pbr4x1JljJ2raBKwnJkLrDsklgcsHEclb0GvlHvpf_1AMD4l-aKcr_KJWT_qelyfuIZ8ap5CRuryA0PZIW71G4tm6sPQPdrS5DwSE5S15ZX6NOtXjAsh7LjAZOvL3AVinbOetzZwkGwNv7RRakclonYH0jO-GE30vU-7FaY08wh8JKkTQLXDsVze_D5yg5ZHAzc2tc8-ZgTRu2XrqxCauJ1ip46WKcNrtfD8cluiFv__j6XQvkkcsPPVRzQHgySsFC9doAqBcmNW9-4HntVeAsRi2yHEnXfcmsgkL0ur9g21U9uw65bAe51KdmdTeT7hvPJ5epxPVzRe9VAAAo8AKCzisPfxfCg53cF5oiZWjo7kjWFNIaF_a3FuO6kYm2KaviInrQo77omjUTR5aeWyr-zKqL6im6Oo2ujZzwjuxDxQpC0hG=w959-h753-no?authuser=0)


 

    

