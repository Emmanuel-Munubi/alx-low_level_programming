/**
* _isdigit - Checks if char is digit
* @c: char to test.
*
* Description: tests whether a char is a digit or not.
* Return: 1 if digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
