#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Double pointer to the stack (head).
 * @counter: The line number in the file (unused).
 *
 * This function rotates the stack, 
 * moving the top element to the bottom,
 * making the second element the new top.
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp;
	stack_t *aux;

	tmp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
