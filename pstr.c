#include "monty.h"

/**
 * f_pstr - Prints the string starting 
 * at the top of the stack, followed by a new line.
 * @head: Double pointer to the stack (head).
 * @counter: The line number in the file (unused).
 *
 * This function prints the characters 
 * on the stack as a string until a non-printable
 * character (outside the ASCII range) 
 * is encountered or the stack is empty.
 * It adds a new line after printing the string.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;

	for (; h; h = h->next)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
	}
	printf("\n");
}
