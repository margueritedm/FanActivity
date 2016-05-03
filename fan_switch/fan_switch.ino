#include <Servo.h>
Servo rotator;
int pos = 0;

void setup() 
{
Serial.begin(9600);
pinMode(2, INPUT_PULLUP);
rotator.attach(3);
}

void loop() 
{
  for (pos = 0; pos <= 180; pos += 1)
  if( digitalRead(2))
    {
  rotator.write(148);              
    }
    else
    {
      rotator.write(120);
    }
}
