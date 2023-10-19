#include "monty.h"

/**
 * pstr - Print the string starting at the top of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the file.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number;

	while (current && current->n != 0 && current->n >= 0 && current->n <= 127)
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
