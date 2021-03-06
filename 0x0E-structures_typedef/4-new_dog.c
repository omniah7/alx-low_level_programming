#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creates a new dog
* @name: a pointer to the name of dog
* @age: the float number of age
* @owner: a pointer to the owner  name
* Return: a pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *o, *n;
	int i;

	dog = malloc(sizeof(struct dog));

	if (name == NULL || age < 0 || owner == NULL || dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	;
	n = malloc(sizeof(char) * (i + 1));

	for (i = 0; owner[i] != '\0'; i++)
	;
	o = malloc(sizeof(char) * (i + 1));

	if (n == NULL || o == NULL)
	{
		free(dog);
		free(n);
		free(o);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		n[i] = name[i];
	n[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		o[i] = owner[i];
	o[i] = '\0';

	dog->name = n;
	dog->age = age;
	dog->owner = o;

	return (dog);
}
