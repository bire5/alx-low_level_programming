#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low, x, y;
	
	x = 'x';
	y = 'y';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != x && low != y)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
