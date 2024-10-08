/*
 * Gabe.h
 *
 *  Created on: Sep 30, 2024
 *      Author: gawis
 */

#ifndef INC_GABE_H_
#define INC_GABE_H_
#include "stm32l4xx_hal.h"
#include "stm32l4xx_ll_gpio.h"
#include "stm32l4xx_ll_bus.h"
#include "Queue.h"

class GPIO_Input {
private:
	GPIO_TypeDef *port; //port to use
	uint32_t pinCast; //pint to use GPIO_PIN_n
	bool pullup;
public:
	GPIO_Input(GPIO_TypeDef *portI, uint32_t pinCastI, bool pullupI);
	void readPin(bool &value);
};


class KnobDriver
{
private:
	bool pState;
	GPIO_TypeDef* port_1;
	uint8_t pin_num_1;
	GPIO_TypeDef* port_2;
	uint8_t pin_num_2;

public:
	bool KnobStateMachine(bool state);
	KnobDriver(GPIO_TypeDef* Port1, uint8_t PinNum1, GPIO_TypeDef* Port2, uint8_t PinNum2);
};

class BtnDriver
{
private:
	bool pState;
	GPIO_TypeDef* port;
	uint8_t pin_num;

public:
	bool BtnStateMachine(bool state);
	BtnDriver(GPIO_TypeDef* Port, uint8_t PinNum);
};

class InputDriver {
private:
	//member variables
	Queue *queueInstance;        		//Pointer to the queue
	int32_t *valToEnq;        			//Numerical value to enqueue
	GPIO_Input *input;          		//GPIO input
	BtnDriver *BstateMachine; 		//State machine button instance
	KnobDriver *KstateMachine; 	//State machine knob instance


public:
	//member functions
	InputDriver(Queue *queue1, int32_t *valToEnq1, GPIO_Input *input1);
	void checkAndEnqueue(); //check for falling edges and enqueue value
};

#endif /* INC_GABE_H_ */
