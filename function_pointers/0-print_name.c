#include "function_pointers.h"
/**
 * print_name - prints a name using a function
 * @name: the name to print
 * @f: the function to use
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
