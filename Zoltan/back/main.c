#include "header.h"

var_global items = {NULL, NULL};

int main(int argc, char *argv[])
{
	FILE *fp;
	char *buffer = NULL;
	size_t size;
	ssize_t line_size;
	unsigned int line_number = 1;
	stack_t *stack;

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

	line_size = getline(&buffer, &size, fp);
	while (line_size != -1)
	{
	        tokenizacion(buffer);
		get_operator(&stack, line_number);
		line_number++;
		line_size = getline(&buffer, &size, fp);
	}

	free(buffer);
	buffer = NULL;
	fclose(fp);
	return (0);
}
