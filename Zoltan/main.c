#include "header.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	char *buffer = NULL;
	size_t size;
	ssize_t line_size;

	(void)argc;

	fp = fopen(argv[1], "r");

	line_size = getline(&buffer, &size, fp);

	while (line_size >= 0)
	{
		printf("letters: %li -- %s", line_size, buffer);
		line_size = getline(&buffer, &size, fp);
	}

	free(buffer);
	buffer = NULL;
	fclose(fp);
	return (0);
}
