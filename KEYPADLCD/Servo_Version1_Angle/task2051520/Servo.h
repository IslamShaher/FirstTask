/*
 * Servo.h
 *
 * Created: 10/12/2018 6:41:55 PM
 *  Author: Amr Eid
 */ 


#ifndef SERVO_H_
#define SERVO_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

void Servo_init(void);
void Servo_set_angle(uint8 angle);



#endif /* SERVO_H_ */