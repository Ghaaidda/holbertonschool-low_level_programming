#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int i = 0, j, res;
while (i < 10)
{
j = 0;
while (j < 10)
{
res = i * j;
if (res > 9)
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else
_putchar(res + '0');
}
_putchar(',');
_putchar(' ');
j++;
}
_putchar('\n');
i++;
}
}
