// Do not remove the include below
#include "lab2_1315069_YeonjinJin.h"

#define FRONT_LED_PIN 10
#define REAR_LED_PIN 9

int check = 1;

void myAnalogWrite(int pin, int percent, int time){
	int duty_cycle = 10;
	int delay_time = (percent*duty_cycle)/100;
	for(; time>0; time-=duty_cycle){
		digitalWrite(pin, HIGH);
		delay(delay_time);
		digitalWrite(pin,LOW);
		delay(duty_cycle -delay_time);
	}
}
void setup()
{
	pinMode(FRONT_LED_PIN, OUTPUT);
	pinMode(REAR_LED_PIN, OUTPUT);
}

void loop()
{
	if (check == 1){
		for(int i = 0; i<5; i++){
				myAnalogWrite(REAR_LED_PIN, 100-25*i, 2000);
		}
		check = 0;
	}
}
