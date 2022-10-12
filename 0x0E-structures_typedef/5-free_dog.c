/*
 * File: 5-free_dog.c
 * Auth: Clifford
 * Desc: Contains a function that frees a dog
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
