#include "monty.h"

/**
 * f_queue - Sets the queue mode.
 * @head: Double pointer to the stack (head).
 * @counter: The line number in the file.
 *
 * This function sets the queue mode,
 * indicating that subsequent operations
 * will treat the stack as a queue (FIFO - First In, First Out).
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
