/*
 * Timer1.c
 *
 * Created: 10/12/2018 7:37:54 AM
 *  Author: Amr Eid
 */ 

#include "Timer1.h"

void Timer1_PWM_init(void)
{
	DDRD|=(1<<5);
	TCCR1A=(1<<COM1A1)|(1<<WGM11);
	TCCR1B=(1<<WGM12)|(1<<WGM13)|(1<<CS12);
	
	TCNT1=0;
	OCR1A=0;
	ICR1=1249;
}

void Timer1_set_dutycycle(float new_duty)
{
	TCNT1=0;
	OCR1A= new_duty*(1249.0/100.0);
}
