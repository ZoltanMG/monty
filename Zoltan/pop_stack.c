#include "header.h"

void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;
	stack_t *aux = *stack;
	if (!(*stack))
	{
		dprintf(STDERR_FILENO,
			"L%d: can't pop an empty stack\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	aux = aux->next;
	aux->prev = NULL;
	free(h);
	*stack = aux;
}
