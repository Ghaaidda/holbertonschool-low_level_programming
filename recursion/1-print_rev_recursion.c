#include "main.h"
/**
 * _print_rev_recursion - prints a string recursively in reverse
 * @s: the strign
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (!*s)
{
_putchar(*s);
_puts_recursion(++s);
}
else
_putchar('\n');
}
