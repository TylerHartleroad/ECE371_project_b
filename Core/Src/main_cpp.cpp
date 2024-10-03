/*
 * main_cpp.cpp
 *
 *  Created on: Oct 1, 2024
 *      Author: Tyler Hartleroad
 */



extern "C" void main_cpp(void)
{
	Queue *q = new Queue();
	// Application *app = new Application();
	OutputDriver *output = new OutputDriver();
	// InputDriver *input = new InputDriver();


	while(1)
	{
		output->Update();
		input->Update();
	}
}


