#include "calc.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*fptr)(int, int);
char *op;
// 1. use atoi to convert string to int
num1 = atoi(argv[0]);
num2 = atoi(argv[2]);
op = argv[1];
// 2. get desired function
fptr = get_ops_func(op);
// 3. Save results and print it to user
result = fptr(num1, num2);
printf("%d", result);
return (0);
}
