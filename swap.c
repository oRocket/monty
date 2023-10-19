#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Double pointer to the stack (head).
 * @counter: The line number in the file.
 *
 * This function swaps the positions
 * of the top two elements in the stack.
 * It checks if the stack is too short
 * and prints an error message in that case.
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len;
	int aux;

	len = 0;
	h = *head;

	for (; h; h = h->next)
	{
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
