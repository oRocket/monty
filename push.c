#include "monty.h"

/**
 * push - Push an element onto the stack.
 * @head: Double pointer to the head.
 * @line_number: The line number in the bytecode file.
 * @n: The value to push onto the stack (as a string).
 */
void push(stack_t **head, unsigned int line_number, const char *n)
{
	if (!head)
		return;

	/* Check if 'n' is an integer */
	if (is_integer(n) == -1)
	{
		printf("L%u: usage: push integer\n", line_number);
		free_stack(head);
		exit(EXIT_FAILURE);
	}
	else
	{
		/* Add a node with the integer value 'n' to the stack */
		if (node_add(head, atoi(n)) == -1)
		{
			free_stack(head);
			exit(EXIT_FAILURE);
		}
	}
}
