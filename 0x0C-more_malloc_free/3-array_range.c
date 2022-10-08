#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int x, i;

	if (min > max)
		return (NULL);
	diff = max - min;
	arr = malloc((x + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= x; i++)
		arr[i] = min++;
	return (arr);
}
