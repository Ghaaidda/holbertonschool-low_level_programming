#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
char *pts = s;
char b;
int len = 0;
int i;
while (*pts)
{
len++;
pts++;
}
len /= 2;
for (i =0; i <= len; i++)
{
b = s[len - i];
s[len - i] = s[len + i];
s[len + i] = b;
}
}
