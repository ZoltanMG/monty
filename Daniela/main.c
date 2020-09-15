#include "header.h"

var_global items = {NULL, NULL, NULL};

int main(int argc, char *argv[])
{
	size_t size;
    FILE *fp;
	ssize_t line_size;
	unsigned int line_number = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	line_size = getline(&items.buffer, &size, fp);
	while (line_size != -1)
	{
        tokenizacion(items.buffer);
		get_operator(&stack, line_number);
		line_number++;
		line_size = getline(&items.buffer, &size, fp);
	}

	free_stack(&stack);
    exit(EXIT_SUCCESS);
}
