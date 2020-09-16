#include "monty.h"

/**
 * nop_stack - The opcode nop doesn’t do anything.
 * @stack: doubly linked list.
 * @line_number: line of file.
 */
void nop_stack(stack_t **stack, unsigned int line_number)
{
	(void) *stack;
	(void) line_number;
}
