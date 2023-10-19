#include "monty.h"
/* Define the global stack variable */
stack_t *global_stack = NULL;
/**
 * main - Entry point for Monty interpreter
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, EXIT_FAILURE on error
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char line[MAX_LINE_SIZE];
	unsigned int line_number = 0;
	char *opcode, *arg;
	size_t line_length;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file))
	{
		line_number++;
		/* Remove trailing "$" character from the line */
		line_length = strlen(line);
		if (line_length > 0 && line[line_length - 1] == '$')
		{
			line[line_length - 1] = '\0';
		}

		opcode = strtok(line, " \n");
		if (opcode)
		{
			if (strcmp(opcode, "push") == 0)
			{
				arg = strtok(NULL, " \n");
				if (arg && isdigit(*arg))
					push(&global_stack, line_number);
				else
				{
					fprintf(stderr, "L%u: usage: push integer\n", line_number);
					free_stack(global_stack);
					fclose(file);
					exit(EXIT_FAILURE);
				}
			}
			else if (strcmp(opcode, "pall") == 0)
				pall(&global_stack, line_number);
			/* Add more opcodes as needed */
		}
	}

	free_stack(global_stack);
	fclose(file);
	return (0);
}
