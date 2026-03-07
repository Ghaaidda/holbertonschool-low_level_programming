#include "main.h"
/**
 *  puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str += 2;
if (*(str - 1) == '\0')
{
break;
}
}
_putchar('\n');
}
