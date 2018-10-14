/*
 * common_macros.h
 *
 * Created: 10/12/2018 7:30:41 AM
 *  Author: Amr Eid
 */ 


#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_

#define SET_BIT(REG,PinNum) (REG|=(1<<PinNum))

#define CLEAR_BIT(REG,PinNum) (REG&=(~(1<<PinNum)))

#define TOGGLE_BIT(REG,PinNum) (REG^=(1<<PinNum))

#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )

#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )

#define BIT_IS_SET(REG,PinNum) ( REG & (1<<PinNum) )

#define BIT_IS_CLEAR(REG,PinNum) ( !(REG & (1<<PinNum)) )

#endif /* COMMON_MACROS_H_ */