/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to dog struct
 * @name: a char pointer to the name of dog
 * @age: a float number of the age of dog
 * @owner: a char pointer to the owner of dog
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
