#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: buffer size
 * @s: bytes of the memory area pointed
 * @b: the constant byte
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
