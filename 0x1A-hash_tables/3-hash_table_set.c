#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: is the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key. value must be duplicated.
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		newnode->next = NULL;
		ht->array[idx] = newnode;
		return (1);
	}
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;
	return (1);
}
