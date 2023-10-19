#include "monty.h"

/**
 * pop - Remove the top element from the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the file.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	*stack = temp->next;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (*stack)
		(*stack)->prev = NULL;
	free(temp);
}
