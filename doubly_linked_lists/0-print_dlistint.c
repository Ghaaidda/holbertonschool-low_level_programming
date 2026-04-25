#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head of the list
 * Return: number of nodes in the list
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint *p = h;
	size_t count = 0;
	while (p)
	{
		printf("%d\n", p->n);
		count++;
	}
	return (count);
}	
