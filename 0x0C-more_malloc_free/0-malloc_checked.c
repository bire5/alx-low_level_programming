#include "main.h"
#include <stdio.h>
#include <stdlib.>
#include <limits.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
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
