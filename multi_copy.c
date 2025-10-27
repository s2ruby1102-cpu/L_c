#include <stdio.h>
#include "multi_copy.h"
void copy(char from[], char to[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
	++i;
}
