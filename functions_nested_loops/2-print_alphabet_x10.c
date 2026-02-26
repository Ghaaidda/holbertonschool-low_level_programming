#include "main.h"
/**
 * print_alphabet_x10 - writes lowercase alphabets in one line
 *
 */
void print_alphabet_x10(void)
{
char i = 'a';
int j = 0;
for (j = 0; j < 10; j++){
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}
_putchar('\n');
}
