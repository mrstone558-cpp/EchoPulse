#include <BluetoothSerial.h>
BluetoothSerial serialbt;

struct ultrasonic {
    float duration;
    int distance;
    const float sound_speed = 0.034;
    int trigger = 27;
    int echo = 34;
};

ultrasonic u1;

void start_sensor() {
    digitalWrite(u1.trigger, LOW);
    delayMicroseconds(2);
    digitalWrite(u1.trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(u1.trigger, LOW);

    u1.duration = pulseIn(u1.echo, HIGH, 30000);
    u1.distance = (u1.sound_speed * u1.duration) / 2;

    if (u1.distance > 100) {
        serialbt.println("Object detected: more than 100 cm away, no need to worry");
    } 
    else if (u1.distance > 0 && u1.distance < 50) {
        serialbt.println("Object has crossed danger level distance!");
    } 
    else {
        serialbt.println("Nothing detected");
        delay(2000);
    }
}

void setup() {
    pinMode(u1.trigger, OUTPUT);
    pinMode(u1.echo, INPUT);
    serialbt.begin("distance dashboard");
}

void loop() {
    start_sensor();
    delay(500);
}