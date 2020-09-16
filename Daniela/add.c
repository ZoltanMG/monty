#include "header.h"


void add_stack(stack_t **stack, unsigned int line_number)
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
        dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n", line_number);
        free_stack(stack);
        exit(EXIT_FAILURE);
    }
    node = *stack;
    aux = aux->next;
    /* sumamos los 2 primeros nodos*/
    aux->n = node->n + node->next->n;
    /*elimino un node que sumé*/
    free(node);
    aux->prev = NULL;
    *stack = aux;
}