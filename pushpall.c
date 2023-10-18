#include "monty.h"

/**
 * push - pushes an element onto the stack.
 * @topper: pointer to the top of the stack.
 * @val: value to operate on
 */
void push(stack_t **toppper, int val)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = val;
	new_node->prev = NULL;
	new_node->next = *topper;
	if (*topper != NULL)
	{
		(*topper)->prev = new_node;
	}
	*topper = new_node;
}

/**
 * pall - Prints all the values on the stack, starting from the top.
 * @topper: A pointer to the top of the stack.
 * @line_number: The current line number in the Monty bytecode file.
 */
void pall(stack_t **topper, unsigned int line_number)
{
	stack_t *current = *topper;

	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
