#include "main.h"

/**
 * isupper - a function that checks for uppercase character
 *@c: input
 * Return: 1 if uppercase, 0 for otherwise
 */
int _isupper(int c)
{
	if((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
