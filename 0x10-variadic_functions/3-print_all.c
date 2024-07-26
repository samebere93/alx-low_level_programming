#include "variadic_functions.h"

/**
 * print_all - print any argument provided to the function
 * @format: the argument specifier
 * Return: any argument given based on format specifier
 */

void print_all(const char * const format, ...)
{
	int k, check_stat;
	char *str;
	va_list spc;

	va_start(spc, format);
	k = 0;
	while (format != NULL && format[k] != '\0')
	{
		switch (format[k])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				check_stat = 0;
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[k + 1] != '\0' && check_stat == 0)
			printf(", ");
		k++;
	}
	printf("\n");
	va_end(spc);
}
