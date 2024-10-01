/*
 * Queue.h
 *
 *  Created on: Oct 1, 2024
 *      Author: tdhar
 */

#ifndef INC_QUEUE_H_
#define INC_QUEUE_H_

class Queue
{
public:
	Queue(void);
	bool enqueue(uint32_t msg);
	bool dequeue(uint32_t *ptr);
private:
	uint32_t head;
	uint32_t load;
};


#endif /* INC_QUEUE_H_ */
