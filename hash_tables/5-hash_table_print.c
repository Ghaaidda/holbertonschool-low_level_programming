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
	hash_node_t *last; /* to print the end */ 
    hash_node_t *temp; /* for traversing */
	unsigned long int indx;

	if (ht != NULL)
    {
        printf("{");
        for (indx = 0; indx < ht->size; indx++)
        {
            temp = ht->array[indx];

            if (indx == (ht->size - 1))
            {
                    printf("\'%s\': \'%s\'", last->key, last->value);
                    break;
            }

            while(temp)
            {  
                printf("\'%s\': \'%s\', ", temp->key, temp->value);
                last = temp;
                temp = temp->next;
            }
        }
        printf("}\n");
    }
}    
