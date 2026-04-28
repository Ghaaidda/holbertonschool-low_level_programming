#include "hash_tables.h"
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
	hash_node_t new_node;
	unsigned long int hash;
	unsigned long int indx;

	if (key == "")
		return (0);

	hash = hash_djb2(key);
	
	for (indx = 0; indx < ht->size; indx++)
	{
		if (ht->array[indx]->key == hash)
			ht->array[indx]->next = new_node;
	}
	
	new_node->key = hash;
	new_node->value = value;
	return (1);
}
