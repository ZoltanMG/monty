#include "monty.h"

/**
 * get_operator - opcodes dictionary
 * @stack: doubly linked list.
 * @line_number: line of file.
 */
void get_operator(stack_t **stack, unsigned int line_number)
{
	instruction_t op_codes[] = {
		{"push", push_stack},
		{"pall", pall_stack},
		{"pint", pint_stack},
		{"pop", pop_stack},
		{"swap", swap_stack},
		{"add", add_stack},
		{"nop", nop_stack},
		{"sub", sub_stack},
		{"div", div_stack},
		{"mul", mul_stack},
		{"mod", mod_stack},
		{NULL, NULL}
	};
	int count;

	for (count = 0; op_codes[count].opcode != NULL; count++)
	{
		if (strcmp(op_codes[count].opcode, items.key_w) == 0)
		{
			op_codes[count].f(stack, line_number);
			return;
		}
	}
	dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n",
		line_number, items.key_w);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
