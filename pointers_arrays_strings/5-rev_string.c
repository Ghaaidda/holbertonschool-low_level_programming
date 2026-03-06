#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: void
 */
void rev_string(char *s)
{
char *start = s;
char *end = s;
char hold;
while (*end)
{
end++;
}
while (end < start)
{
end--;
hold = *start;
*start = *end;
*end = hold;
start++;
}
}
