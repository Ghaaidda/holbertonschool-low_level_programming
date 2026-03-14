#include "main.h"
/**
 * _print_rev_recursion - prints a string recursively in reverse
 * @s: the strign
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
s++;
if (*s)
{
_print_rev_recursion(++s);
}
_putchar(*s);
}
