#include "monty.h"

/**
 * is_integer - Check if a string is a valid integer.
 * @str: The string to check.
 *
 * Return: 1 if it's an integer, 0 otherwise.
 */
int is_integer(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	if (*str == '-')
		str++;

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}
