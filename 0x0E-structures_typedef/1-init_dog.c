#include "dog.h"

/**
 * init_dog - function to initialize a variable of typre struct
 * @d: dog variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * return: voide
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
