#include "main.h"
/**
 * *_strncat - concatenates the strings
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 * @n: number of element to concatenate from src
 *
 * Return: A pointer to the destination string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr1 = dest, *ptr2 = src, *ptr3 = dest;
int i = 0, j;
while (*ptr1)
{
ptr1++;
i++;
}
for (j = 0; src[i] && j < n; j++)
{
dest[i++] = src[j];
ptr2++;
}
return (ptr3);
}
