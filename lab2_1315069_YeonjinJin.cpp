// Do not remove the include below
#include "lab2_1315069_YeonjinJin.h"


#define FRONT_LED_PIN 10
#define REAR_LED_PIN 9

void setup()
{
	pinMode(FRONT_LED_PIN, OUTPUT);
	pinMode(REAR_LED_PIN, OUTPUT);
}

void loop()
{
	for(int state = 0; state<=255; state+=5){
		analogWrite(FRONT_LED_PIN, state);
		analogWrite(REAR_LED_PIN, 255-state);
		delay(51);
	}
	for(int state = 0; state<=255; state+=5){
		analogWrite(FRONT_LED_PIN, 255-state);
		analogWrite(REAR_LED_PIN, state);
		delay(51);
	}
}
