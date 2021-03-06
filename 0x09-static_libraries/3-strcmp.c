#include "holberton.h"
/**
* _strcmp - compare 2 strings
*@s1: string 1
*@s2: string 2
*
* Return: Description of the returned value
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}

		s1++;
		s2++;
	}

	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
