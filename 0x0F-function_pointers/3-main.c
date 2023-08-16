#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints results of simple operations
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the argument
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
int num1, num2;
int result;
char *op;
if (argc != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
return (99);
}
if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
{
printf("Error\n");
return (100);
}
result = get_op_func(op)(num1, num2);
printf("%d\n", result);
return (0);
}
