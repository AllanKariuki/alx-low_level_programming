#include <stdio.h>
#include <stlib.h>
#include "dog.h"

/**
 * print_dog - prints the dog
 * @name: pointer to the name of the dog
 * age: age of the dog
 * @owner: pointer to the owner of the dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if(d->name == NULL)
		{
			printf("Name: (nil)\n");
		}else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %.6f\n", d->age);

		if(d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
	else
		return;
}
