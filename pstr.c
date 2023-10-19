#include "monty.h"

/**
 * pstr - Print the string starting at the top of the stack.
 * @head: Double pointer to the stack. 
 * @line_number: The line number in the file.
 */
void pstr(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	if (!head || !*head)
	{
		printf("L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *head;
	for (; (tmp != NULL) && (tmp->n != 0) &&
			(tmp->n >= 0) && (tmp->n <= 127); tmp = tmp->next)
	{
		printf("%c", tmp->n);
	}
	printf("\n");
}
