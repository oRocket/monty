#include "monty.h"

/**
 * get_function - correct operation function
 * @token1: number 1 bytecode input (opcode)
 * Return: pointer to get_function
 */
void (*get_function(char *token1))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruction_s[] = {
		{"pop", pop},
		{"pall", pall},
		{"pint", pint},
		{"swap", my_swap},
		{"add", my_add},
		{"sub", my_sub},
		{"mul", my_mul},
		{"div", my_div},
		{"mod", my_mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"nop", nop},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instruction_s[i].f != NULL; i++)
	{
		if (strcmp(token1, instruction_s[i].opcode) == 0)
			return (instruction_s[i].f);
	}
	return (NULL);
}
