#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: first char in array
 *
 * Return: pointer to array or NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (str == NULL || size == 0)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
