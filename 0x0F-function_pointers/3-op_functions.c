#include <stdlib.h>

/**
 * op_add - addition function
 * op_sub - substraction function
 * op_mul - multiplication function
 * op_div - divition function
 * op_mod - modulus function
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: an int
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (b == 0)
	{
		return (000);
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (000);
	}
	return (a % b);
}
