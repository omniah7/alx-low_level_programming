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
	hash_node_t *newnode, *node;

	if (!ht)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	/*search for the key in the hash list*/
	while (node)
	{
		/*if found: put the new value*/
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
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
