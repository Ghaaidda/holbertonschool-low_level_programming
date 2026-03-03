#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length as int
 */
int _strlen(char *s)
{
int length = 0;
while (*s)
{
length += length;
s++;
}
return (length);
}
