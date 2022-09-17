#include "main.h"

/**
 * Isdigit - function to check for numbers between 0 and 9
 *
 * Return: 1 for success and 0 for others
 */
int _isdigit(int c)
{
	if((c >= 48) && (c <= 57)){
		return (1);
	}
	else{
		return (0);
	}
}
