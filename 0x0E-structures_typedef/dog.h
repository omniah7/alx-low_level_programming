#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a struct dog
 * @name: a char pointer to the name of dog
 * @age: a float number of the age of dog
 * @owner: a char pointer to the owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
