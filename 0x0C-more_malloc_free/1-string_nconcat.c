#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size of memmory to be allocated for  s2
 * Return: pointer to a newly allocated space in memmory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x1, x2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x1 = 0; s1[x1] != '\0'; x1++)
	;
	for (x2 = 0; s2[x2] != '\0'; x2++)
	;
	if (n >= x2)
		n = x2;
	s = malloc(sizeof(char) * (x1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = x1; j < x1 + n; j++)
		s[j] = s2[j - x1];
	s[j] = '\0';
	return (s);	
}
