/**
 * _memset - main function
 * 
 * @s: main string
 * @b: a constant byte
 * @n: the first n characters
 * 
 * Return: return a pointer
 *  
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;

		i++;
	}

	return (s);
}
