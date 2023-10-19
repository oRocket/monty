#include "monty.h"

/**
 * pint - Print the value of the top of the stack.
 * @head: Double pointer to the stack.
 * @line_number: The line number in the file.
 */
void pint(stack_t **head, unsigned int line_number)
{
	if (!head || !*head)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
