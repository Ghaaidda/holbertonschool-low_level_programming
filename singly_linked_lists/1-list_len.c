#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints length of SLL
 * @h: pointer to first element in list (head)
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
        size_t count = 0;
        const list_t *p = h;

        while (p)
        {
                count++;
		p = p->next;
        }
        return (count);
}
