#include "main.h"
/**
 * *_strchr - finds a character in string.
 * @s: the string.
 * @c: the character.
 *
 * Return: pointer to character or NULL if not found.
 */
char *_strchr(char *s, char c)
{
char *p = s;
while (*p)
{
if (*p == c)
return (p);
else
p++;
}
return (p);
}
