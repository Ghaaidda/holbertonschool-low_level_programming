#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: void
 */
void print_rev(char *s)
{
char *c = s + _strlen(s);
while (*c != *s)
{
_putchar(*c);
c--;
}
_putchar('\n');
}