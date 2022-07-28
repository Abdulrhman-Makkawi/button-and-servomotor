#include <Servo.h>
Servo Testservo;
int pos=0;
void setup()
{
  pinMode(2,INPUT);
  Testservo.attach(3);
}

void loop()
{
  if(digitalRead(2)==LOW){
    Testservo.write(180);
  }
  else
    
 Testservo.write(0);

}