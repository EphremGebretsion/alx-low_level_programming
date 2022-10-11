#include "dog.h"
/**
 * init_dog - is used to intialize dog
 * @d: accepts the address of dog instance
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
