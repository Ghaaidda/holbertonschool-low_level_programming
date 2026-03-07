#include "main.h"
/**
 *  puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
while (*str && *(str +1))
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
