#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: value to check
 *
 * Return: 1 if it's a digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
