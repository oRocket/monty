#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of the stack.
 * @head: Double pointer to the stack (head).
 * @counter: The line number in the file.
 *
 * This function multiplies the top two elements of the stack and
 * replaces the second element with the result.
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int aux;
	int len;

	len = 0;
	h = *head;

	for (; h; h = h->next)
	{
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;

	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
