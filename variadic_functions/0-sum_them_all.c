#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n:first argument
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int i, result;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
result += va_arg(args, int);
return (result);
}
