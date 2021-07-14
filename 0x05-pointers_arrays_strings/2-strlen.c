/**
* _strlen - returns the length of a string.
* @s: string to check length of.
*
* Description: returns the length of a string.
* Return: length of string (result).
*/

int _strlen(char *s)
{
int  count = 0;
int i = 0;
while (s[i] != '\0')
{
count++;
i++;
}
return (count);
}
