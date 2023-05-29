#include <Servo.h>

Servo myservo;
char serial_data;

void setup(){
  Serial.begin(9600);
  myservo.attach(9);
  myservo.write(90);
}

void loop() {
  if (Serial.available()>0)
  {
    serial_data=Serial.read();
    if (serial_data == 'R')
    {
      myservo.write(140);
      Serial.println("R");
    }
    else if (serial_data == 'G')
    {
      myservo.write(20);
      Serial.println("G");
    }
    else if (serial_data == 'N')
    {
      myservo.write(80);
      Serial.println("N");
    }
  }
}