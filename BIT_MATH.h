/*
 * BIT_MATH.h
 *
 * Created: 7/26/2020 3:17:24 AM
 *  Author: Ibrahim
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SIT_BIT(REG,bit)       (REG |=(1<<bit))
#define CLEAR_BIT(REG,bit)     (REG&= ~(1<<bit))
#define TOGGLE_BIT(REG,bit)       (REG ^= (1<<bit))
#define GET_BIT(REG,bit)       ((REG>>bit)&0x01)


#endif /* BIT_MATH_H_ */