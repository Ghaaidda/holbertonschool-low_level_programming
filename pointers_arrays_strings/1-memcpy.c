#include "main.h"
/**
 * *_memcpy - copies memory area to another.
 * @dest: target memory area.
 * @src: memory area to copy from.
 * @n: number of bytes.
 *
 * Return: pointer to memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (p);
}
