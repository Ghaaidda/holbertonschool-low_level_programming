#include "function_pointers.h"
/**
 * array_iterator - executes a function on all elements of an array
 * @array: the array
 * @size: size of array
 * @action: the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
