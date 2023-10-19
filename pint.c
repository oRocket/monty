#include "monty.h"

/**
 * f_pint - Prints the value of the top
 * element of the stack, followed by a new line.
 * @head: Double pointer to the stack (head).
 * @counter: The line number in the file.
 *
 * This function prints the integer value
 * of the top element of the stack.
 * It checks for an empty stack and
 * prints an error message in that case.
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
