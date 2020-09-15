#include "header.h"

/**
 * free_stack - free to stack
 * @stack: the stack
 * Return: void
 */

void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	if (*stack)
	{
		while (*stack)
		{
			*stack = (*stack)->next;
			free(tmp);
			tmp = *stack;
		}
	}
	free(items.buffer);
	fclose(items.monty_file);
}

/**
 * push_stack - push to stack
 * @stack: the stack
 * @line_number: line of my file
 * Return: void
 */

void push_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (items.num == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	if (*items.num != '0' && _is_digit(items.num) &&
	items.num[0] != '-')
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		free_stack(stack);
		free(new);
		exit(EXIT_FAILURE);
	}
	new->n = atoi(items.num);
	new->next = *stack;
	new->prev = NULL;
	if (*stack)
		(*stack)->prev = new;
	*stack = new;
}

int _is_digit(char *num)
{
    int count = 0;
    
    for (count = 0; num[count]; count++)
    {
        if (isdigit(num[count]) == 0)
            return (1);
    }
    return (0);
}