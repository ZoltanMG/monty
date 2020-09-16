#include "monty.h"

/**
 * mod_stack - computes the rest of the division.
 * @stack: doubly linked list.
 * @line_number: line of file.
 */
void mod_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	stack_t *aux = *stack;

	int count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	if (count < 2)
	{
		dprintf(STDERR_FILENO,
			"L%u: can't mod, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	if (aux->n == 0)
	{
		dprintf(STDERR_FILENO,
			"L%u: division by zero\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	node = *stack;
	aux = aux->next;
	aux->n = node->next->n % node->n;
	free(node);
	aux->prev = NULL;
	*stack = aux;
}
