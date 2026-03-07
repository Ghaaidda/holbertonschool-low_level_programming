#include "main.h"
/**
 * *_strcpy - copies a string to a buffer
 * @dest: buffer
 * @src: string to copy
 *
 * Return: pointer to buffer
 */
char *_strcpy(char *dest, char *src)
{
char *pts = dest;
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = src[i];
return (pts);
}
