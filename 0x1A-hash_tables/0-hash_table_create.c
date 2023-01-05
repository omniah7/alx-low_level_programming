#include "hash_tables.h"

/**
* hash_table_create - creates a hash table.
* @size: is the size of the array
* Return: a pointer to the newly created hash table. or
*           NULL If something went wrong
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **newarr;

	/*define the new hash table*/
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;

	/*define the new array of hash nodes*/
	newarr = calloc(size, sizeof(hash_node_t *));
	if (newarr == NULL)
		return (NULL);

	new->array = newarr;
	return (new);
}

