#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1:
 * @s2:
 * @n:
 * Return: pointer to a newly allocated space in memmory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int  count = 0;
int i = 0;
while (s2[i] != '\0')
{
count++;
i++;
if(n < count)
{
*s1 = (char *)malloc(n);
}
else
{
*s1 = (char *)malloc(count);
}
char *p = &s1;
return (p);
}

int main(void)
{
    char *concat;

    concat = string_nconcat("Holberton ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
