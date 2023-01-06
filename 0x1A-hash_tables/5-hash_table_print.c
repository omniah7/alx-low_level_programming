#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
* @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char f;

	f = 'f';
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/*if empty list*/
		if (!node)
			continue;

		/*print each element of the list*/
		if (f != 'f')
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		f = 'n';
		node = node->next;
		while (node)
		{
			printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
