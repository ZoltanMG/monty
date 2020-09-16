#include "header.h"

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
