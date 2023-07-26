#include<stdio.h>
#include"dog.h"

/**
 * print_dog - tell the name and the age
 *@d: pointer for the dog informations
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
{

		if (d->name != NULL)
{
			printf("Name: %s\n", d->name);
}
		else
{
			printf("Name: (nil)\n");
}

		if (d->age < 0)
{
			printf("age: (nil)\n");
}
		else
{

			printf("Age: %f\n", d->age);
}

		if (d->owner != NULL)
{
			printf("Owner: %s\n", d->owner);
}
		else
{
			printf("Owner: (nil)\n");
}
}
	else
{
		return;
}
}
