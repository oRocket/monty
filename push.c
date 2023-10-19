#include "monty.h"

/**
 * push - Push an element onto the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the file.
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \t\n");
	int value;

	if (!arg || !is_integer(arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(arg);
	push_stack(stack, value);
}
