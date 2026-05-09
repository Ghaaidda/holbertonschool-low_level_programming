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
    hash_node_t *temp; /* for traversing */
	unsigned long int indx;
    int flag = 1; /* for printing comma */

	if (ht == NULL)
        return;
    
    printf("{");
    for (indx = 0; indx < ht->size; indx++)
    {
        temp = ht->array[indx];
        while(temp != NULL)
        {  
            if (!flag)
                printf(", ");
                
            printf("\'%s\': \'%s\', ", temp->key, temp->value);
            flag = 1;
            temp = temp->next;
        }
    }
    printf("}\n");
}    
