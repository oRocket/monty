#include "monty.h"

/**
 * rotl - Rotate the stack to the top.
 * @head: Double pointer to the stack.
 * @line_number: Line number in the Monty bytecode file
 */
void rotl(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;

	if ((*head)->next != NULL)
	{
		tmp = *head;
		/* Find the last element in the stack */
		for (; tmp->next != NULL; tmp = tmp->next)
			;

		/* Adjust pointers to perform the rotation */
		(*head)->prev = tmp;
		tmp->next = *head;
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		tmp->next->next = NULL;
	}
}
