/**
 * swap_int - swap the value of two integers
 *
 * @a: first variable
 * @b: second variable
 *
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
