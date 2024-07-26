#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform calculator function on command line
 * @argc: argument count
 * @argv: argument vector
 * Return: result of the calculated function executed
 */

int main(int argc, int argv[])
{
	char *op;
	int num1, int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = (argv[2]);
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op) (num1, num2));

	return (0);
}
