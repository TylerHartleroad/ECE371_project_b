/*
 * Queue.cpp
 *
 *  Created on: Oct 1, 2024
 *      Author: tdhar
 */
#include "Queue.h"

Queue::Queue(void)
{

}

bool Queue::enqueue(int32_t msg)
{
	uint32_t new_head = head + 1;
	if(new_head > QUEUE_SIZE - 1)
	{
		new_head = 0;
	}
	if(new_head == tail)
	{
		return false;
	}
	else
	{
		buffer[head] = msg;
		head = new_head;
		return true;
	}
}

bool Queue::dequeue(int32_t *ptr)
{
	if(head == tail)
	{
		return false;
	}
	else
	{
		*ptr = buffer[tail];
		tail++;
		if(tail > QUEUE_SIZE - 1)
		{
			tail = 0;
		}
		return true;
	}
}
