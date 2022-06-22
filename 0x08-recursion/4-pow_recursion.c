/**
 * _pow_recursion - function to find the value of x raised to the power of y
 *
 * @x: first number
 * @y: the power
 *
 * Return: the value
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	if (y <= 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
