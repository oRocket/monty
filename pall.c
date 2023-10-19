#include "monty.h"

/**
 * f_pall - Prints the elements of the stack.
 * @head: Double pointer to the stack (head).
 * @counter: Unused line number (not used).
 *
 * This function prints the elements of the stack, starting from the top.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;

	if (h == NULL)
		return;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
	}
}
