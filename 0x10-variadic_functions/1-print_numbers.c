#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: int.
 * return:int.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	int i;

	if (separator != NULL)
	{
		va_start(num, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(num, int));
			printf("%s", separator);
		}
	}
	va_end (num);
}

