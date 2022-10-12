#include "dog.h"
/**
 * init_dog - initializes the dog
 * struct dog - structure of a dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		name = d->name;
		age = d>age;
		owner = d-> owner;
	}
}
