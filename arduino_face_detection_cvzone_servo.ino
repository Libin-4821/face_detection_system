#include <cvzone.h>
#include <ESP32Servo.h> 

Servo myservo;

SerialData serialData(1,1);
int valsRec[1];

int servoPin = 18;

void setup() {
  serialData.begin();
  myservo.attach(servoPin);
  myservo.write(0); //CLOSES CAP ON STARTING
  delay(100);
  

}

void loop() {
 serialData.Get(valsRec);
  if ( valsRec[0] == 1 ) { //CHANGE AS PER AS NEED
    myservo.attach(servoPin);
    delay(1);
    myservo.write(180);
    delay(3500); 
    myservo.detach();//CHANGE AS PER AS NEED
  }
  else{
    myservo.attach(servoPin);
    myservo.write(0);
    delay(1500); //CHANGE AS PER AS NEED
    myservo.detach();
  }
}
