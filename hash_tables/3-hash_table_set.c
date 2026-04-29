#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds a new node to hash table
 * @ht: the hash table
 * @key: new key
 * @value: new value
 *
 * Return: 1 if addition successeds, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int hash;
	unsigned long int indx;

	if (key == NULL)
		return (0);
	
	hash = hash_djb2(key);
	indx = key_index(hash, ht->size);

	/* update logic */
	if (iht->array[indx] && strcmp(ht->array[indx]->key, key) == 0)
	{
		ht->array[indx]->value = value;
		return (1);
	}

	/* new node logic */
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
        
        if (new_node == NULL)
                return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[indx] == NULL)
	{
		ht->array[indx] = new_node;
		return (1);
	}
	else 
	{
		new_node->next = ht->array[indx];
		ht->array[indx] = new_node;
		return (1);
	}
}
