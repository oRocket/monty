#include "monty.h"

/**
 * my_swap - Swap the top two elements of the stack.
 * @head: Double pointer to the stack(head).
 * @line_number: The line number in the file.
 */
void my_swap(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*head)->next;
	if (tmp->next != NULL)
	{
		(*head)->next = tmp->next;
		(*head)->next->prev = *head;
	}
	else
	{
		tmp->prev->prev = tmp;
		tmp->prev->next = NULL;
	}
	tmp->prev = NULL;
	tmp->next = *head;
	(*head) = tmp;
}
