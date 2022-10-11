#ifndef dog_h
#define dog_h

/**
 * File: dog.h
 * By: Clifford
 * Use: To define a new structure type dog
 */

/**
 * struct dog - a new type describing a dog
 * @name - name of the dog
 * @age - age of the dog
 * @owner - owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
