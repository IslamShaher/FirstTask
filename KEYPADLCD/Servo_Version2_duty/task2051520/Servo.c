/*
 * Servo.c
 *
 * Created: 10/12/2018 6:41:41 PM
 *  Author: Amr Eid
 */ 

#include "Servo.h"
#include "Timer1.h"

void Servo_init(void)
{
	Timer1_PWM_init();
}

void Servo_set_angle(uint8 angle)
{
	float new_angle=(((float32)(angle/180.0) + 1.0) * 5.0);
	Timer1_set_dutycycle(new_angle);
}
