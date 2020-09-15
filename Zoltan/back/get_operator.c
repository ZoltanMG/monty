#include "header.h"

void get_operator(stack_t **stack, unsigned int line_number)
{
	instruction_t op_codes[] = {
		{"push", push_stack},
		{"pall", pall_stack},
		{NULL, NULL}
	};
	int count;

	for (count = 0; op_codes[count].opcode != NULL; count++)
	{
		if (strcmp(items.key_w, op_codes[count].opcode) == 0)
		{
			op_codes[count].f(stack, line_number);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n",
		line_number, items.key_w);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
