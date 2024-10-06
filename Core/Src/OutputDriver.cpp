/*
 * OutputDriver.cpp
 *
 *  Created on: Oct 1, 2024
 *      Author: Tyler Hartleroad
 */
#include "OutputDriver.h"

DAC_TypeDef hdac1;

OutputDriver::OutputDriver(void)
{
	// Enable DAC1 and DAC2
	DAC->CR |= (1<<0) | (1<<16);
	DAC->DHR12RD |= (4095U << 0) | (4095U << 16);
}


void OutputDriver::Update(void)
{
	return;
}
