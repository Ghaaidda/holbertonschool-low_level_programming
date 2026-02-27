#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int i = 0;
int j = 0;
while (i < 10)
{
while (j < 10)
{
_putchar((j * 9) + '0')
_putchar(',');
_putchar(' ');
j++;
}
_putchar('\n');
i++;
}
