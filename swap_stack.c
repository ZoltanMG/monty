#include "monty.h"
/**
 * swap_stack - changed fist node whit second node.
 * @stack: doubly linked list.
 * @line_number: line of file.
 */
void swap_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;
	stack_t *aux = *stack;
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	if (count > 0)
	{
		h = *stack;
		aux = aux->next;
	}
	if (count < 2)
	{
		dprintf(STDERR_FILENO,
			"L%d: can't swap, stack too short\n",
			line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	else if (count == 2)
	{
		h->next = NULL;
		h->prev = aux;
		aux->prev = NULL;
		aux->next = h;
	}
	else
	{
		h->next = aux->next;
		h->prev = aux;
		aux->next->prev = h;
		aux->prev = NULL;
		aux->next = h;
	}
	*stack = aux;
}
