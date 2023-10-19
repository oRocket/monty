#include "monty.h"
/**
 * my_mul - Multiply the second node by the top node's value.
 * @head: Pointer to the top of the list (stack).
 * @line_number: Line number of the command.
 */
void my_mul(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n *= (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}

