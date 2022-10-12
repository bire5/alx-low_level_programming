/*
 * File: 4-new_dog.c
 * Auth: Clifford
 */

#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int ln, i;
	ln = 0;

	while (src[ln] != '\0')
	{
		ln++;
	}
	for (i = 0; i < ln; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * dog - creates a new dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 * Return: return struct pointer
 */
 
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	return (d);
}
