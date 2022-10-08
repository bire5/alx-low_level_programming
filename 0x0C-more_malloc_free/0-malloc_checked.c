#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _malloc_checked - Function that allocates memory
 * @b: parameter
 * Return: Return the printer
 */

void *malloc_checked(unsigned int b)
{
	char *a;
	
	a = malloc(sizeof(char) * b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
