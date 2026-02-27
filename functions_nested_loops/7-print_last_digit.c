#include "main.h"
/**
 * print_last_digit - returns last digit of int
 * @n: the int to check
 *
 * Return:  the value of the last digit
 */
int print_last_digit(int n)
{
if (n < 0)
{
return (-n % 10);
}
else
{
return (n % 10);
}
}
