#include "header.h"

/**
 * tokenizacion - removes spaces and tabs.
 * @str: line of file.
 */
void tokenizacion(char *str)
{
	items.key_w = strtok(str, " \n\t");
	items.num = strtok(NULL, " \n\t");
}
