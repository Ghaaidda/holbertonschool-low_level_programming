#include "hash_tables.h"
/**
* hash_table_get - returns value associated with key
* @ht: hash table
* @key: key
*
* Return - value or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *temp; /* for searching */
    unsigned long int indx;

    if (ht == NULL || key == NULL)
        return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[indx];

	/* search */
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->valu);
		}
		temp = temp->next;
	}
	/* If not found */
	return (NULL);
}