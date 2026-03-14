#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the strign
 *
 * Return: length in integer
 */
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(++s));
}
else
return (0);
}
