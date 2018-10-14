/*
 * Timer1.h
 *
 * Created: 10/12/2018 7:38:05 AM
 *  Author: Amr Eid
 */ 


#ifndef TIMER1_H_
#define TIMER1_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

void Timer1_PWM_init(void);
void Timer1_set_dutycycle(float new_duty);



#endif /* TIMER1_H_ */
