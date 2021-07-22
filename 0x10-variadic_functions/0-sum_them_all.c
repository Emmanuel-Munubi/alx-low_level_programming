#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: int.
 * return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int c;
	double sum = 0;

	va_start(nums, n);
	for (c = 0; c < n; c++)
	{
		if (n == 0)
			return (0);
		int args = va_arg(nums, int);

		sum += args;
	}
	va_end(nums);
	return (sum);
}

