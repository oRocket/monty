#include "monty.h"

/**
 * swap - Swap the top two elements of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the file.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;
	stack_t *second = first->next;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	first->next = second->next;
	first->prev = second;
	second->prev = NULL;
	second->next = first;

	*stack = second;
}
