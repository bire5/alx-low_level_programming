#include <stdio.h>
#include "dog.h"

/**
 *init_dog - Initializes variables of type struct dog
 * @d: The dog to be initialized
 * @name: The dog name 
 * @age: The age of the dog
 * @Owner: The owner of the dog
 */
void init_dog(struct dog d, char *name, float age, char *owner){
	if(d !=NULL)
	{
		d->name =name;
		d->age = age;
		d->owner = owner;
	}
}
