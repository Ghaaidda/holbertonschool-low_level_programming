#include "calc.h"
#include <stdio.h>
/**
 * get_op_func - returns a pointer to a function that matches s
 * @s: operator sign
 *
 * Return: pointer to int return type function
 */
int *get_op_func(char *s)
{	
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
int i;
while (i < 6)
{	
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
i++;
}
}
