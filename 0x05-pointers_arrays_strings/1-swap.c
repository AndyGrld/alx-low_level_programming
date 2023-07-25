/**
 * swap_int - swaps the value of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
