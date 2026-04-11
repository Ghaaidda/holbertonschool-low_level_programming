#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*fptr)(int, int);
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = argv[2];
fptr = get_op_func(op);
if (!get_op_func(op))
{
printf("Error\n");
exit(99);
}
if (fptr == op_div && num2 == 0)
{
printf("Error\n");
exit(100);
}
result = fptr(num1, num2);
printf("%d\n", result);
return (0);
}
