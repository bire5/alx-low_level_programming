#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/**char a;
	int b;
	long int c,
	long long int d;
	float e;
	*/

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu bytes(e)\n", (unsigned long)sizeof(float));
	return (0);
}
