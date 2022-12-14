#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describes a dog
 * @name: name of the dog
 * @age: age of the dog
 * @ownner: owner of the dog
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - defines a new name for the type struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

