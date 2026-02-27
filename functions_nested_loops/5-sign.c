#include "main.h"
/**
 * print_sign - checks the sign of number n
 * @n: The number to check
 *
 * Return: 1 if the number is positive. 0 if the number is 0. -1 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('_');
return (-1);
}
}
