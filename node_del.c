#include "monty.h"

/**
 * node_del - Deletes the last node of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: no return
 */
void node_del(stack_t **head)
{
	stack_t *del = NULL;

	/* Check if the list is empty or has only one node */
	del = *head;
	if ((*head)->next == NULL)
	{
		*head = NULL;
		free(del);
	}
	else
	{
		/* Remove the front node and adjust the links */
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(del);
	}
}
