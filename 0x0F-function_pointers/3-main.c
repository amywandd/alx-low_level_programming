#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 98 for incorrect number of arguments,
 *         99 for invalid operator, 100 for division/modulo by zero
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char *operator;
    int (*op)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    operator = argv[2];
    num2 = atoi(argv[3]);

    if (num2 == 0 && (*operator == '/' || *operator == '%'))
    {
        printf("Error\n");
        exit(100);
    }

    op = get_op_func(operator);

    if (op == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    result = op(num1, num2);
    printf("%d\n", result);

    return 0;
}
