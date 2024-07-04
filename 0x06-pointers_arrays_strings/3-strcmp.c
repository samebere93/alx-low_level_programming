#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: value 1
 * @s2: value 2
 * Return: a string
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
	if (s1[i] < s2[i])
		return (s1[i] - s2[i]);

		else if (s2[i] < s1[i])
			return (s2[i] - s1[i]);
	}


	}
	return (0);
}
