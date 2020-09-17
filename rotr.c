#include "monty.h"

/**
 * rotr_stack - The opcode rotl rotates the stack to the top.
 * @stack: doubly linked list.
 * @line_number: line of file.
 */
void rotr_stack(stack_t **stack, unsigned int line_number)
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
		*stack = aux;
		aux->prev = NULL;
		aux->next = h;
		h->next = NULL;
		h->prev = aux;
	}
	else
	{
		aux->prev->next = NULL;
		aux->prev = NULL;
		aux->next = h;
		h->prev = aux;
		*stack = aux;
	}
}
