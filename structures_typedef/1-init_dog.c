#include<stdio.h>
#include"dog.h"

/**
 * init_dog - tell the name and the age
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *@d: pointer for the dog informations
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
