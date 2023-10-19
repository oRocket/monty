#include "monty.h"

/**
 * my_mod - Compute the modulus of the second node from the top node.
 * @head: Pointer to the top of the stack.
 * @line_number: Line number of the command.
 */
void my_mod(stack_t **head, unsigned int line_number)
{
	if (head == NULL || *head == NULL)
	{
		printf("L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0 || (*head)->next->n == 0)
	{
		printf("L%u: division by zero\n", line_number);
	}
	(*head)->next->n %= (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
