#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * print quoted text
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2, "and tha piece of art is useful\"-Dora Korpar, 2015-10-19\n",59);
	return (0);
}
