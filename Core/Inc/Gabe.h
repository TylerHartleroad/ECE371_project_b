/*
 * Gabe.h
 *
 *  Created on: Sep 30, 2024
 *      Author: gawis
 */

#ifndef INC_GABE_H_
#define INC_GABE_H_

#include "stm32l4xx_hal.h"

class Input
{
public:
	struct
	{
		bool ChanSel;
		uint8_t ModeSel;
		uint32_t AmpVal1;
		uint32_t FreqVal1;
		uint32_t DelayVal1;
		uint32_t AmpVal2;
		uint32_t FreqVal2;
		uint32_t DelayVal2;
	};
};

class KnobDriver
{
private:
	GPIO_TypeDef* port_1;
	uint8_t pin_num_1;
	GPIO_TypeDef* port_2;
	uint8_t pin_num_2;

public:
	void KnobStateMachine(uint32_t* KnobVal);
	KnobDriver(GPIO_TypeDef* Port1, uint8_t PinNum1, GPIO_TypeDef* Port2, uint8_t PinNum2);
};

class BtnDriver
{
private:
	GPIO_TypeDef* port;
	uint8_t pin_num;

public:
	void BtnStateMachine(uint8_t* BtnVal);
	BtnDriver(GPIO_TypeDef* Port, uint8_t PinNum);
};

#endif /* INC_GABE_H_ */
