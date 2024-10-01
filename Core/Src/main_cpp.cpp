/*
 * main_cpp.cpp
 *
 *  Created on: Oct 1, 2024
 *      Author: Tyler Hartleroad
 */



extern "C" void main_cpp(void)
{
	OutputDriver *output = new OutputDriver();
	InputDriver *input = new InputDriver();
	Application *app = new Application();


	while(1)
	{
		output->Update();
		input->Update();
	}
}


