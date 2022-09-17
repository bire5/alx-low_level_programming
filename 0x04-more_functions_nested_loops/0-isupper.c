#include "main.h"

/**
 * isupper - this function checks whether a character is uppercase or lowe
 *
 * Return: 1 for uppercase and 0 for others
 */
int _isupper(int c)
{
	if((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
