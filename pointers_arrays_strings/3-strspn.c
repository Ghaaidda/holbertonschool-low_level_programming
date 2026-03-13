#include "main.h"
/**
 * _strspn - counts length of a prefix substring.
 * @s: the string.
 * @accept: the substring.
 *
 * Return: prefix lenght.
 */
unsigned int _strspn(char *s, char *accept);
{
unsigned int len = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
len++;
break;
}
else if (accept[i + 1] == '\0')
{
return (len);
}
}
s++;
}
}
