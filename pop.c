#include "monty.h"

/**
 * pop - Remove the top element from the stack.
 * @head: Double pointer to the stack.
 * @line_number: The line number in the file.
 */
void pop(stack_t **head, unsigned int line_number)
{
	/* Check if the stack is empty */
	if (head == NULL || *head == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		free_stack(head); /* Free the stack and its nodes */
		exit(EXIT_FAILURE); /* Exit with an error status */
	}
	else
	{
		node_del(head); /* Remove the top node from the stack */
	}
}
