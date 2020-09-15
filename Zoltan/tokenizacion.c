#include "header.h"
void tokenizacion(char *str)
{
	items.key_w = strtok(str, " \t");
	items.num = strtok(NULL, " \t");
}
