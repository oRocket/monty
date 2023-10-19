#include "monty.h"

/**
 * Define Monty instructions with their corresponding functions.
 */

instruction_t instructions[] = {
        {"push", push},
        {"pall", pall},
        {"pint", pint},
        {NULL, NULL}
};

/* Define the global stack variable here */
stack_t *global_stack = NULL;

int execute_monty_bytecode(const char *file_name)
{
	int i, found;
	char line[MAX_LINE_LENGTH], *opcode;
	unsigned int line_number = 1;

	FILE *file = fopen(file_name, "r");
	if (!file) {
		handle_error("Error: Can't open file", 0);
		return EXIT_FAILURE;
	}

	while (fgets(line, sizeof(line), file))
	{
		opcode = strtok(line, " \t\n");
		if (!opcode)
		{
			line_number++;
			continue; /* Skip empty lines */
		}

		found = 0;
		for (i = 0; instructions[i].opcode; i++)
		{
			if (strcmp(opcode, instructions[i].opcode) == 0)
			{
				instructions[i].f(&global_stack, line_number);
				found = 1;
				break;
			}
		}

		if (!found)
		{
			handle_error("L%u: unknown instruction", line_number);
			return (EXIT_FAILURE);
		}

		line_number++;
	}

	fclose(file);
	return (EXIT_SUCCESS);
}
