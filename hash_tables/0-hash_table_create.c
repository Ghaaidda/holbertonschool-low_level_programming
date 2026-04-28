#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 *
 * Return: pointer to new hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_ht == NULL)
		return (NULL);

	hash_node_t **array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	new_ht->size = size;
	new_ht->array = array;
	return (new_ht);
}
