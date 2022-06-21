/**
 * _strstr - main function
 * 
 * @haystack: first argument
 * @needle: second argument
 * 
 * Return: return a pointer
 * 
 */


char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	while (haystack[j] != 0)
	{
		for (i = 0; needle[i] == haystack[j] && needle[i] != 0; i++)
		{
			if (needle[i + 1] == 0 && needle[i] == haystack[j])
			{
				return (haystack + (j - i));
			}
			j++;
		}
		j++;
	}
	return(0);
}
