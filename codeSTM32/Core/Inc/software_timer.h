/*
 * software_timer.h
 *
 *  Created on: Oct 22, 2024
 *      Author: Hii
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#ifndef INC_SORTWARE_TIMER_H_
#define INC_SORTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
