/**
 * reverse_array - reverses the content of an array of integers
 * @a: the int array pointer
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= n / 2 - 1; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
