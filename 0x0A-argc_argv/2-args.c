#include <stdio.h>

/**
 * main - program that print all arguments it receives
 * @argc: arguments count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0 ; k < argc ; k++)
		printf("%s\n", argv[k]);
	return (0);
}
