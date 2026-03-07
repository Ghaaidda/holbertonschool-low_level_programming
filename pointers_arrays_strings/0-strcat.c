#include "main.h"
/**
 * *_strcat - concatenates the strings
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr1 = dest, *ptr2 = src, *ptr3 = dest;
int i = 0, j = 0;
while (*ptr1)
{
ptr1++;
i++;
}
while (*ptr2)
{
dest[i++] = src[j++];
ptr2++;
}
dest[i] = '\0';
return (ptr3);
}
