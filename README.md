Turns your ESP32 into a tiny, overprotective guard robot.


 #.FUNCTIONS
• Detects anything within the max distance of 1m.
• Sends that data on the serial Bluetooth monitor.
• if detected thing comes too close detects on serial Bluetooth monitor.

 #.HARDWARE REQUIRED 
 • ESP32 (or any other board).
 • ultrasonic sensor (here HC-SR04).


 #.CONNECTIONS
 • ESP32 (here devkit v1) VIN to the VCC of HC-SR04.
 • ESP32 GND to HC-SR04 GND.
 • ESP32 any gpio pin (here 27) to trigger.
 • ESP32 gpio 34 (use any other like this) to echo , WARNING⚠️ - Don't directly connect gpio 34 to echo use a voltage divider circuit together with 10kohm rasistor for safety.

 #.POSSIBLE MODIFICATIONS
 • You can use buzzer, led, display or anything you like instead of serial Bluetooth monitor.

     EHJOY, THANKS FOR READING 