/**
 * _memset - fill memory with set byte value
 *@s: memory area to return
 *@b: constant byte to fill with
 *@n: number of bytes to fill
 *
 *Return: pointer to value at s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
