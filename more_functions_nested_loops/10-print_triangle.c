#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: number of hash signs
 *
 * Return: void
 */
void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if ((i + j) <= size)
{
_putchar('_');
}
else
{
_pucthar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
