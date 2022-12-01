/*
 * servo.c
 *
 *  Created on: Oct 28, 2022
 *      Author: cheye
 */
#include "servo.h"

void servoSetAngleLeft(unsigned int angle){
	if(angle>180) angle = 180;
	int pwm = (angle*((maxAngle-minAngle)/180) + minAngle);
	  TIM1->CCR1 = pwm;
}


void servoSetAngleRight(unsigned int angle){
	if(angle>180) angle = 180;
	int pwm = (angle*((maxAngle-minAngle)/180) + minAngle);
	  TIM1->CCR1 = pwm;
}
