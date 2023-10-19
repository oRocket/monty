#include "monty.h"

/**
 * pchar - Print the top node in the stack as an ASCII letter.
 * @head: Pointer to the head of the stack.
 * @line_number: Bytecode line number.
 */
void pchar(stack_t **head, unsigned int line_number)
{
	if (!head || !*head)
	{
		printf("L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (((*head)->n) >= 0 && ((*head)->n) <= 127)
	{
		printf("%c\n", (*head)->n);
	}
	else
	{
		printf("L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
