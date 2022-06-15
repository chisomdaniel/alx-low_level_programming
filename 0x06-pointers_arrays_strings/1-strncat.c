/**
 * _strncat - concatenate 2 strings using n bytes from src
 * @dest: pointer argument
 * @src: second pointer argument
 * @n: n byte
 *
 * Return: return a pointer
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char hold[98];
	int i;
	int j = 0;
	int byte = n;
	int bytecount = 0;

	for (i = 0;; i++)
	{
		if (dest[i] == 0)
		{
			if (bytecount == byte || src[j] == 0)
			{
				break;
			}
			else
			{
				hold[i] = src[j];
				j++;
				bytecount++;
			}
		}
		else
		{
			hold[i] = dest[i];
		}
	}

	for (i = 0;; i++)
	{
		if (hold[i] == 0)
		{
			dest[i] = 0;
			break;
		}
		else
		{
			dest[i] = hold[i];
		}
	}

	return (dest);
}
