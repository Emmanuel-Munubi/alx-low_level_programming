/**
* _strncpy - Short description, single line
*@dest: dest string
*@src: src string
*@n: n limit
*
* Return: altered dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
