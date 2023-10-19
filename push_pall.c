#include "monty.h"
/**
 * push - Pushes an element onto the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number in the input file
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \n");
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(global_stack);
		exit(EXIT_FAILURE);
	}

	if (!arg || !isdigit(*arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free(new_node);
		free_stack(global_stack);
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi(arg);
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}

/**
 * pall - Prints all the values on the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number in the input file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/**
 * free_stack - Frees the memory allocated for the stack
 * @stack: Pointer to the top of the stack
 */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}
