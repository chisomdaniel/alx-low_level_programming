/**
 * _strcmp - function to compare string
 *
 * @s1: first char
 * @s2: second char
 *
 * return: 0 (Success)
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int a;
	int b;
	int value;

	for (i = 0; s1[i] != 0 || s2[i] != 0; i++)
	{
		a = (int)s1[i];
		b = (int)s2[i];

		if (a < b)
		{
			value = b - a;
			break;
		}
		else if (a > b)
		{
			value = b - a;
			break;
		}
		else if (a == b)
		{
			value = b - a;
			break;
		}
	}

	return (value);
}
