/**
 * _strpbrk - main function
 *
 * @s: first argument
 * @accept: second argument
 *
 * Return: return a pointer
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != 0)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
		i++;
	}

	return (0);
}
