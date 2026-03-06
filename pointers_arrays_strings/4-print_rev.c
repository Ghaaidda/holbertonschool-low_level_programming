#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: void
 */
void print_rev(char *s)
{
char *c = s;
while (*c)
{
c++;
}
while (*c != *s)
{
_putchar(*c+1);
c--;
}
_putchar('\n');
}