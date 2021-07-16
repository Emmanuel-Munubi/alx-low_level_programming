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
	char *new;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	new = (char *)malloc(sizeof(char) * (i + n + 1));
	if (new == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		new[i] = s2[j];
		i++, j++;
	}
	new[i] = '\0';
	return (new);
}
