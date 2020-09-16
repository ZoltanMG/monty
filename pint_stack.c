#include "monty.h"
/**
 * pint_stack - print first number from linked list.
 * @stack: doubly linked list.
 * @line_number: number line of the file.
 */
void pint_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if (!(*stack))
	{
		dprintf(STDERR_FILENO,
			"L%d: can't pint, stack empty\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", h->n);
}
