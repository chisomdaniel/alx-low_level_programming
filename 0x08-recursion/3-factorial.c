/**
 * factorial - function to find the factorial of a number
 *
 * @n: first argument
 *
 * Return: return an int
 */

int factorial(int n)
{
	int a;

	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	a = n * factorial(n - 1);
	return (a);
}

