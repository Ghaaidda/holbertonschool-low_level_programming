#include "main.h"
/**
 * _isalpha - checks if c is an alphabetic character
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
