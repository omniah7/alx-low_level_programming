#include <stdio.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* @d: a pointer to a struct dog
* Description: If an element of d is NULL,
* print "(nil)" instead of this element
* if name is NULL, print "Name: (nil)"
* if d is NULL print nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
