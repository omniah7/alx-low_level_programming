#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creates a new dog
* @name: a pointer to the name of dog
* @age: the float number of age
* @owner: a pointer to the owner  name
*Return: a pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));

	if (name == NULL || age < 0 || owner == NULL || dog == NULL)
	{
		free (dog);
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner=owner;

	return (dog);
}
