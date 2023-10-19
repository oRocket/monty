#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* data structures */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* opcodes related prototypes */
void (*get_function(char *token1))(stack_t **stack, unsigned int line_number);
void push(stack_t **head, unsigned int line_number, const char *n);
void pall(stack_t **head, unsigned int line_number);
void pchar(stack_t **head, unsigned int line_number);
void pint(stack_t **head, unsigned int line_number);
void pop(stack_t **head, unsigned int line_number);
void my_swap(stack_t **head, unsigned int line_number);
void rotl(stack_t **head, unsigned int line_number);
void nop(stack_t **head, unsigned int line_number);
void rotr(stack_t **head, unsigned int line_number);
void pstr(stack_t **head, unsigned int line_number);
int is_integer(const char *n);

/* calculator prototypes */
void my_add(stack_t **head, unsigned int line_number);
void my_sub(stack_t **head, unsigned int line_number);
void my_mul(stack_t **head, unsigned int line_number);
void my_div(stack_t **head, unsigned int line_number);
void my_mod(stack_t **head, unsigned int line_number);

/* doubly linked list related prototypes */
int node_add(stack_t **head, int n);
void node_del(stack_t **head);
void free_stack(stack_t **head);

#endif /* monty.h */
