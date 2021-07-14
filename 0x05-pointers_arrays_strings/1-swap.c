/**
* swap_int - Swap two integers
* @a: first int
* @b: second int
*
* Description: Swaps the values of two integers
* Return: VOID
*/

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
