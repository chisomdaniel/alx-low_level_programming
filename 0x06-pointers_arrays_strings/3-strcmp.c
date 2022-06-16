/**
 * _strcmp - function to compare string
 *
 * @s1: first char
 * @s2: second char
 *
 * Return: 0 (Success)
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	unsigned char a;
	unsigned char b;
	int value;

	for (i = 0; s1[i] != 0 || s2[i] != 0; i++)
	{
		a = s1[i];
		b = s2[i];

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
			continue;
		}
	}

	return (value);
}
