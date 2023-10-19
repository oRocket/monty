#include "monty.h"

/**
 * addqueue - Adds a new node to the tail of the stack.
 * @head: Double pointer to the head of the stack.
 * @n: New value to be added.
 *
 * This function allocates memory 
 * for a new node and adds it to the end of the stack.
 * If the stack is empty, 
 * it sets the new node as the head of the stack.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}

	new_node->n = n;
	new_node->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}

	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

