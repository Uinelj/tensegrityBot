#include <Servo.h>
#define SERVO_NUMBER 6

const int firstPwmPin = 2;
const int initval = 1000; //Init value for the servos' position. 
Servo servo[SERVO_NUMBER];

void setup()
{
	for(int i=0; i<SERVO_NUMBER; i++){
			    servo[i].attach(firstPwmPin+i);
			    servo[i].writeMicroseconds(initval);
			}
	Serial.println("Setup done.");	
}

void loop()
{
	
}
