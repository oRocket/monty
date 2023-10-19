#include "monty.h"
/**
 * f_mod - Computes the remainder of the division of the second
 * top element of the stack.
 * @head: Double pointer to the stack (head).
 * @counter: The line number in the file.
 *
 * This function performs the modulus operation on the top two elements
 * of the stack and replaces the second element with the result.
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0;
	int aux;

	h = *head;

	for (; h; h = h->next)
	{
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;

	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
