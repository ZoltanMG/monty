#include "monty.h"

/**
 * pstr_stack - opcode pstr
 * @stack: doubly linked list.
 * @line_number: line of file.
 */

void pstr_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = *stack;
	(void) line_number;

	/*if the stack is empty, print only a new line*/
	if (*stack == NULL)
		printf("\n");
	while (ptr != NULL)
	{
		if (ptr->n > 32 && ptr->n < 126)
		{
			printf("%c", ptr->n);
		}
		if (ptr->n == 0)
		{
			printf("\n");
			return;
		}
		ptr = ptr->next;

	}
	printf("\n");
	if (ptr == NULL)
		return;

}
