#include "header.h"

/**
 * pall_stack - prints all items of linked list.
 * @stack: doubly linked list.
 * @line_number: line of file.
 */
void pall_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	(void) line_number;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
