#include "main.h"
#include <stdio.h>
/**
 * isupper - this function checks whether a character is uppercase or lowe
 *
 * Return: 1 for uppercase and 0 for others
 */

int main(void)
{
	char c;
	
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
       	return (0);
}
