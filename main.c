#include "monty.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file_name>\n", argv[0]);
		return EXIT_FAILURE;
	}

	if (execute_monty_bytecode(argv[1]) == EXIT_FAILURE)
	{
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
