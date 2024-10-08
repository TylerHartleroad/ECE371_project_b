/*
 * OutputDriver.cpp
 *
 *  Created on: Oct 1, 2024
 *      Author: Tyler Hartleroad
 */
#include "OutputDriver.h"

#define BIT(n) (1 << (n))

OutputDriver::OutputDriver(void)
{
	// Enable DAC1 and DAC2
	DAC->CR |= BIT(0) | BIT(16);
	DAC->DHR12RD |= (4095 << 0) | (4095 << 16);
}


void OutputDriver::Update(void)
{
	return;
}
