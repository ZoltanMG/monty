#include "header.h"

var_global items = {NULL, NULL, NULL, NULL};

/**
 * main - Implement the push and pall opcodes.
 * @argc: length of argv
 * @argv: matrix with arguments.
 *
 * Return: always o
 */
int main(int argc, char *argv[])
{
	size_t size;
	ssize_t line_size;
	unsigned int line_number = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	items.monty_file = fopen(argv[1], "r");
	if (items.monty_file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	line_size = getline(&items.buffer, &size, items.monty_file);
	while (line_size != -1)
	{
		tokenizacion(items.buffer);
		get_operator(&stack, line_number);
		line_number++;
		line_size = getline(&items.buffer, &size, items.monty_file);
	}

	free_stack(&stack);
	exit(EXIT_SUCCESS);
}
