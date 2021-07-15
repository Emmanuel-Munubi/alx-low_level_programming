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
	int i;
	int j;
	if(s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";
	i = 0;
	while(s1[i] != '\0')
		i++;
	char* newstr = malloc(sizeof(char) * (i + n + 1));
	if (newstr == NULL)
		return (NULL);
	i = j = 0;
	while(s2 != '\0')
	{
		newstr[i] = s1[i]
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		newstr[i] = s2[j];
		i++, j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
