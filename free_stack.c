#include "monty.h"

/**
 * free_stack - A function that rees a doubly linked list.
 * @head: Head of the stack.
 * Return: No return.
 *
 * This function frees the memory of all nodes in a doubly linked list.
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;

	for (; head; head = aux)
	{
		aux = head->next;
		free(head);
	}
}
