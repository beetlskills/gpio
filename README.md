The project folder is "gpio".


Arduino Setting
 
1. Go to Arduino IDE's File/Preferences menu. Enter the following Additional boards manager URLs: 

https://dl.espressif.com/dl/package_esp32_index.json

2. Go to Tools/Board/Boards Manager menu. Search for ESP32. Install board support package for ESP32 from Espressif Systems

3. Go to Tools/Board/esp32 and select ESP32 Wrover Module

4. Go to Tools/Port and select the COM port that ESP32 is connected to

5. Open gpio.ino from File/Open

6. Click on Upload button to compile, upload and run.

7. Observe the board. RED led should blink continuously.  

8. Press the side tactile button. WHITE led should blink once.