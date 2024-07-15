#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int k;
	unsigned int r, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (k = 1 ; k < argc ; k++)
		{
			a = argv[k];
			for (r = 0 ; r < strlen(a) ; r++)
			{
				if (a[r] < 48 || a[r] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(a);
			a++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
