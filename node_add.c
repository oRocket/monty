#include "monty.h"

/**
 * node_add - Add a node to the front of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @n: Node data to be added.
 * Return: Always 0 success, -1 otherwise.
 */
int node_add(stack_t **head, int n)
{
	stack_t *new;

	if (!head)
		return (-1);

	/* Allocate memory for the new node and set its data. */
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		printf("Error: malloc failed");
		return (-1);
	}
	new->n = n;

	/* If the linked list is empty, set the new node as the head. */
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		/* Insert the new node at the front of the list. */
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (0);
}
