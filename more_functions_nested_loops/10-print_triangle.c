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
for (i = 0; i < size; i++)
{
for (j = size; j > 1; j--)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
