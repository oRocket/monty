#include "monty.h"

void handle_error(const char *message, unsigned int line_number)
{
	if (line_number > 0)
	{
		fprintf(stderr, "%s %u\n", message, line_number);
	}
	else
	{
		fprintf(stderr, "%s\n", message);
	}
}
