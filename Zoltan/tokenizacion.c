#include "header.h"
void tokenizacion(char *str)
{
	items.key_w = strtok(str, " \n\t");
	items.num = strtok(NULL, " \n\t");
}
