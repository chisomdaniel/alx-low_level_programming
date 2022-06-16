/**
 * string_toupper - function to change all lower case to uppercase
 *
 * @n: string
 *
 * Return: return a pointer
 */

char *string_toupper(char *n)
{
	int i, j;
	int a, b;
	char hold[98];

	for (i = 0;; i++)
	{
		b = (int)n[i];

		if (n[i] == 0)
		{
			break;
		}
		else if (b >= 97 && b <= 122)
		{
			a = (int)n[i] - 32;
			hold[i] = (char)a;
		}
		else
		{
			hold[i] = n[i];
		}
	}

	for (j = 0; hold[j] != 0; j++)
	{
		if (hold[j] == 0)
		{
			break;
		}
		else
		{
			n[j] = hold[j];
		}
	}

	return (n);
}
