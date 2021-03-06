/*
 * ButtonToggleLedDemo.h
 *
 * Created: 6/1/2017 20:19:54
 *  Author: Gabe
 */ 


#ifndef BUTTONTOGGLELEDDEMO_H_
#define BUTTONTOGGLELEDDEMO_H_

#include "Buttons.h"
#include "Leds.h"

/******************************
* ButtonToggleLedInit
*	Initilizes ButtonToggle project.
*	Call before ButtonToggleLedLoop.
**************************************/
void ButtonToggleLedInit(void);


/***********************************
* ButtonToggleLedLoop
*	Endless loop.
*	Reads push button
*	Toggles between green (pin 13)
*	and red (pin 12) leds on every push.	 
************************************/
void ButtonToggleLedLoop(void);


#endif /* BUTTONTOGGLELEDDEMO_H_ */