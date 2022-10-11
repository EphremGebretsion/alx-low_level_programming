#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - used to create a dog object
 * @name: used to store the name
 * @owner: holds the name of the owner
 * @age: the age of the dog
 *
 * Description: create and hold a dog info
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
