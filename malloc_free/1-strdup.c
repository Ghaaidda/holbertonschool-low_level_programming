#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  returns a pointer to a new string
 * @str: the a string
 *
 * Return: a pointer to the string or null if allocation fails
 */
char *_strdup(char *str)
{
if (!str)
return (NULL);	
char *pts;
unsigned int i, len = 0;
for (i = 0; str[i]; i++)
len++;
pts = malloc(sizeof(char) * (len + 1));
if (!pts)
return (NULL);
for (i = 0; str[i]; i++)
pts[i] = str[i];
pts[len] = '\0';
return (pts);
}
