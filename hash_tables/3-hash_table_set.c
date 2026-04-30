#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/** 
 * add_new_node - adds a new node to bucket
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 success, 0 otherwise
 */
int add_new_node(hash_table_t *ht, const char *key, const char *value)
{
        hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

        if (new_node == NULL)
                return (0);

        new_node->key = strdup(key);
        new_node->value = strdup(value);

        if (new_node->key && new_node->value == NULL)
                return (0);

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
	hash_node_t *temp; /* for searching */
	unsigned long int indx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[indx];

	/* update logic */
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	/* new node logic */
	return (add_new_node(ht, key, value));
}
