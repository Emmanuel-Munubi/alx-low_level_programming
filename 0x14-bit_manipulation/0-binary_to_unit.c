#include "main.h"
#include "holberton.h"

/**
 * _pow - raises an int to a specified power.
 *
 * @num: number subject to raising.
 * @n: power.
 *
 * Return: the result of raisint to a certain power.
 */
unsigned int _pow(unsigned int num, unsigned int n)
{
	unsigned int result = 1, i = 0;

	while (i < n)
	{
		result *= num;
		i++;
	}

	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * -there is one or more chars in the string b that is not 0 or 1
 * -b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, result, i = 0, count = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		count++;
		i++;
	}

	--count;
	i = 0;

	while (b[i] != '\0')
	{
		result = (b[i] - '0') * _pow(2, count);
		total += result;
		--count;
		i++;
	}

	return (total);
}

