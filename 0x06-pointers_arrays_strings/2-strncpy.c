/**
 * _strncpy - function to copy a string from one variable to another
 *
 * @dest: copy to this variable
 * @src: copy from this
 * @n: copy n byte from the variable
 *
 * Return: dest (pointer)
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
