/**
 * _strchr - function to locate a character c in s
 *
 * @s: the main string
 * @c: character to locate
 *
 * Return: a pointer
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);

}
