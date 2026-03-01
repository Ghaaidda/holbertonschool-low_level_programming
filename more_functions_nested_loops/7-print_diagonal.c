#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number of backslashs (line length)
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('\\');
_putchar(' ');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
