/**
 * reverse_array - function to revers an array of int
 *
 * @a: array of int
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int hold[9999];

	for (i = 1; i <= n; i++)
	{
		hold[i] = a[n - i];
	}

	for (j = 1; j <= n; j++)
	{
		a[j] = hold[j];
	}
}
