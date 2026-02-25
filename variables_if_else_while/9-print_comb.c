#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';
for (i = '0'; i <= '9'; i++)
{
if (i == '9')
{
putchar((char)i);
return (0);
}
putchar((char)i);
putchar(',');
putchar(' ');
}
return (0);
}
