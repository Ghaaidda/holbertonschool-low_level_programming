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
while (*p)
{
for (i = 0; accept[i]; i++)
{
if (*p == accept[i])
return (p);
}
p++;
}
return (0);
}
