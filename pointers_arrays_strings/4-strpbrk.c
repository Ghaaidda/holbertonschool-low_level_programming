#include "main.h"
/**
 * *_strpbrk - searches for a string in a set of bytes.
 * @s: the string.
 * @accept: bytes.
 *
 * Return: pointer to string or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (0);
}
