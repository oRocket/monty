#include "monty.h"
/**
 * _add - Add the top two elements of the stack.
 * @head: Double pointer to the stack. 
 * @line_number: The line number in the file.
 */
void my_add(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n += (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
