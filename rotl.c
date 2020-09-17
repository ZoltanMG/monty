#include "monty.h"

/**
 * rotl_stack - The opcode rotl rotates the stack to the top.
 * @stack: doubly linked list.
 * @line_number: line of file.
 */
void rotl_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;
	stack_t *aux = *stack;
	int count = 0;

	(void) line_number;
	if (*stack == NULL)
		return;
	while (aux->next)
	{
		count++;
		aux = aux->next;
	}

	if (count == 0)
		return;
	else if (count == 1)
	{
		aux->next = h;
		aux->prev = NULL;
		h->next = NULL;
		h->prev = aux;
		*stack = aux;
	}
	else
	{
		*stack = h->next;
		h->next->prev = NULL;
		aux->next = h;
		h->prev = aux;
		h->next = NULL;
	}
}
