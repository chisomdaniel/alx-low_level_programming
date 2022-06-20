/**
 * _memcpy - function to copy n number of string from src to dest
 *
 * @dest: main array
 * @src: array to copy from
 * @n: number of string to copy
 *
 * Return: returns a pointer
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
