/*
 * Queue.h
 *
 *  Created on: Oct 1, 2024
 *      Author: tdhar
 */

#ifndef INC_QUEUE_H_
#define INC_QUEUE_H_

#include <stdint.h>

#define QUEUE_SIZE 10

class Queue
{
public:
	Queue(void);
	bool enqueue(int32_t msg);
	bool dequeue(int32_t *ptr);
private:
	int32_t buffer[QUEUE_SIZE];
	uint32_t head = 0;
	uint32_t tail = 0;
};


#endif /* INC_QUEUE_H_ */
