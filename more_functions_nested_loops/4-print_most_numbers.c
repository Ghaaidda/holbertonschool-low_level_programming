#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 8)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
