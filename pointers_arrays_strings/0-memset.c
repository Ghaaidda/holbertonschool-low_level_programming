#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to target memory area.
 * @b: the byte.
 * @n: number of bytes.
 *
 * Return: pointer to memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
int i = 0;
while (i < n)
{
s[i++] = b;
}
return (p);
}
