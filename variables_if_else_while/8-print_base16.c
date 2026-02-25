#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i = '0';
char j = 'a';
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
