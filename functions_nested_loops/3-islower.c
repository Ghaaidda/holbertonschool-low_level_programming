#include "main.h"
/**
 * _islower - checks if c is a lowercase character
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
