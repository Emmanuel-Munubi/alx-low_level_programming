/**
* _strlen - returns the length of a string.
* @s: string to check length of.
*
* Description: returns the length of a string.
* Return: length of string (result).
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
