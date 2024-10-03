/*
 * Gabe.cpp
 *
 *  Created on: Sep 30, 2024
 *      Author: gawis
 */

#include <iostream>
#include "Gabe.h"
#include "stdint.h"
#include "main.h"

void KnobStateMachine(uint32_t* KnobVal){};

void BtnDriver::BtnStateMachine(uint8_t* BtnVal){};


/*
class StateMachine
{
private:
    bool pState; // Previous state
public:
	StateMachine bool Pstate(true) : {}
	//Update the state with the current pin value
	bool detectedge(bool state)
	{
		if(pState == true && state == false)
		{
			//Fallingedge = 0
			return 0;
		}
		if(pState == false && state == true)
		{
			//Risingedge = 1
			return 1;
		}
		pState = state;
	}
};
*/
