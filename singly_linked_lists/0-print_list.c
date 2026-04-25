#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of SLL
 * @h: pointer to first element in list (head)
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *p = h;
	while (p)
	{
		if (p->str == NULL)
			printf("[0] nill");
		else
			printf("[%u] %s", p->len, p->str);
		p = p->next;
		count++;
	}
	return (count);
}
