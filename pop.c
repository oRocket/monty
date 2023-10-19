#include "monty.h"

/**
 * f_pop - Removes the top element from the stack.
 * @head: Double pointer to the stack (head).
 * @counter: The line number in the file.
 *
 * This function removes the top element
 * from the stack and frees its memory.
 * It checks for an empty stack and
 * prints an error message in that case.
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	*head = h->next;
	free(h);
}
