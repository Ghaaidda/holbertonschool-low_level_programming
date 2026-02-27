#include "main.h"
/**
 * print_last_digit - returns last digit of int
 * @n: the int to check
 *
 * Return:  the value of the last digit
 */
int print_last_digit(int n)
{
int result = n % 10;
if (n < 0)
{
result = -result;
}
_putchar(result);
return (result);
}
