#include "monty.h"

/**
 * pop_stack - pop to stack
 * @stack: the stack
 * @line_number: line of my file
 * Return: void
 */

void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if (!(*stack))
	{
		dprintf(STDERR_FILENO,
			"L%d: can't pop an empty stack\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	*stack = h->next;
	if (h->next != NULL)
		h->next->prev = NULL;
	free(h);
}
