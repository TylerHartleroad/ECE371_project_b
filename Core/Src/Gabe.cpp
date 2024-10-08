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
/*
InputDriver::InputDriver(queue *queue1, int32_t *valToEnq1, GPIO_Input *input1) :
queueInstance(queue1), valToEnq(valToEnq1), input(input1) { //pass values as addresses and ensure no new objects are created
} //(no local instances of these classes or things are not going to work
*
void InputDriver::checkAndEnqueue(){
	bool data = false; //assume the common case; no input is detected
	input->readPin(data);
	if(BstateMachine.detectFEdge(data)) {
		queueInstance->enqueue(*valToEnq); //place value on the queue
	}
	return;
};
*/
GPIO_Input::GPIO_Input(GPIO_TypeDef *portI, uint32_t pinCastI, bool pullupI) :
	port(portI), pinCast(pinCastI), pullup(pullupI) {
} //set the member variables up given the parameters

void GPIO_Input::readPin(bool &value) { //read the input, change the value stored at value
	if (pullup) { //pull ups flip the inputs; high = no input, low = input
		value = !(LL_GPIO_IsInputPinSet(port, pinCast));
	} else {
		//high = true, low = false
		value = (LL_GPIO_IsInputPinSet(port, pinCast));
	}
	return;
}
/*
KnobDriver::KnobDriver(GPIO_TypeDef* Port1, uint8_t PinNum1, GPIO_TypeDef* Port2, uint8_t PinNum2);
bool KnobDriver::KnobStateMachine(bool state){
	bool EdgeDect;

	if(pState == true and state == false){
		return 1; //Falling edge detected = 1
	}
	if(pState == false and state == true){
		return 2; //Rising edge detected = 2
	}
	return 0; // in between states
};

BtnDriver::BtnDriver(GPIO_TypeDef* Port, uint8_t PinNum);
bool BtnDriver::BtnStateMachine(bool state){
	bool FEdgeDetected; //value to store state machine result

	if (pState == true and state == false) { //falling =past high, present low
		FEdgeDetected = true; //the 1 case where a falling edge is detected
	} else {
		FEdgeDetected = false; //all other cases are not a falling edge
	}
	pState = state; //update the past state to the current state
	return FEdgeDetected;
};
*/
