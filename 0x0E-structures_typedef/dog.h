#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a struct dog
 * @name: a char pointer to the name of dog
 * @age: a float number of the age of dog
 * @owner: a char pointer to the owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
