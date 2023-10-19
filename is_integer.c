#include "monty.h"

/**
 * is_integer - Check if a string is a valid integer.
 * @n: The string to check.
 * Return: 0 if it's an integer, otherwise -1
 */
int is_integer(const char *n)
{
	int i = 0;

	/* If the string starts with '-', skip the first character */
	if (*n == '-')
		i = 1;

	/* Iterate through the characters in the string */
	for (; *(n + i) != '\0'; i++)
	{
		/* If any character is not a digit, return -1 */
		if (isdigit(*(n + i)) == 0)
			return (-1);
	}

	/* Return 0 if it's a valid integer */
	return (0);
}
