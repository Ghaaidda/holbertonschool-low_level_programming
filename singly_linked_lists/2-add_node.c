#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - add new node to SLL
 * @head: new head
 * @str: new head string data
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node->str = strdup(str);
	new_node-> next = head->next;

	return (new_node);
}
