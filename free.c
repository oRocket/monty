#include "monty.h"

/**
 * free_stack - Frees a doubly linked list
 * with only int data, no strings.
 * @head: Pointer to the head of the list.
 */
void free_stack(stack_t **head)
{
	/* Return if the list is empty */
	if (!head || !*head)
		return;

	/* Iterate through the list with a for loop */
	for (; *head && (*head)->next; *head = (*head)->next)
	{
		free((*head)->prev);
	}

	/* Free the last node */
	free(*head);
}
