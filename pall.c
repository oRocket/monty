#include "monty.h"

/**
 * pall - Print all elements on the stack.
 * @head: Double pointer to the stack.
 * @line_number: The line number in the file.
 */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (!head || !*head)
	{
		return; /* Nothing to print if the stack is empty. */
	}

	(void)line_number; /* Unused variable, just silence the compiler warning. */

	tmp = *head;

	for (; tmp != NULL; tmp = tmp->next)
	{
		printf("%d\n", tmp->n);
	}
}
