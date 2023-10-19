#include "monty.h"

/**
 * rotr - Rotate the stack so that the bottom node becomes the first one.
 * @head: Pointer to the head of the stack.
 * @line_number: Line number (not used).
 */
void rotr(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	(void)line_number;

	if ((*head)->next != NULL)
	{
		tmp = *head;
		for (; tmp->next != NULL; tmp = tmp->next)
			continue;

		(*head)->prev = tmp;
		tmp->next = *head;
		tmp->prev->next = NULL;
		tmp->prev = NULL;
		(*head) = (*head)->prev;
	}
}
