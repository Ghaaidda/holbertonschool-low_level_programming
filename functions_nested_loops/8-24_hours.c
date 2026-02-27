#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
char h = 0;
char m = 0;
for (h = 0; h < 24; h++)
{
if (h < 10)
{
_putchar('0');
}
_putchar(h);
for (m = 0; m < 60; m++)
{
_putchar(':');
_putchar(m);
}
_putchar('\n');
}
}
