#include "header.h"

/**
 * free_stack - free to stack
 * @stack: the stack
 * Return: void
 */

void free_stack(dlistint_t *stack)
{
	if (!stack)
		return;
	free_stack(stack->next);
	free(stack);
}

/**
 * push_stack - push to stack
 * @stack: the stack
 * @line_number: line of my file
 * Return: void
 */

void push_stack(stack_t **stack, unsigned int line_number)
{
    stack_t *my_node = NULL;

    my_node = malloc(sizeof(stack_t));

    if (items.num == NULL || isdigit(items.num) != 1)
    {
        dprintf(STDERR_FILENO, "L%u: usage: push integer", line_number);
        free_stack(stack);
        exit(EXIT_FAILURE);
    }
    if (!my_node)
    {
        dprintf(STDERR_FILENO, "Error: malloc failed \n");
        free_stack(items.stack);
        free(items.buffer);
        free(my_node);
        exit(EXIT_FAILURE);
    }

    my_node->n = atoi(items.num);
    my_node->next = *stack;
    my_node->prev = NULL;

    if (*stack != NULL)
        (*stack)->prev = my_node;
    *stack = my_node;
}
