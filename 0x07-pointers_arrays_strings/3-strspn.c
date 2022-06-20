/**
 * _strspn - main function
 *
 * @s: first argument
 * @accept: second argument
 *
 * Return: return a character
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int j;

	while (s[i] != ' ')
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
		i++;
	}
	return (count);
}
