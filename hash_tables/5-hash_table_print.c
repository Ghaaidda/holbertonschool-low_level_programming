#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
* hash_table_print - prints hash table
* @ht: hash table
*
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp; /* for searching */
	unsigned long int indx = 0;

	if (ht != NULL)
    {
        printf("{");
        while (indx < ht->size)
        {
            printf("%s: %s", temp->key, temp->value);
            temp = temp->next;
            indx++;
        }
        printf("}\n");
    }
}    
