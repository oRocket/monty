#include "monty.h"

/**
 * push_stack - Push an element onto the stack.
 * @stack: Double pointer to the stack.
 * @value: The integer value to be pushed onto the stack.
 */
void push_stack(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}
