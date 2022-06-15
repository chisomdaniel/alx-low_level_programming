/**
 * _strcat - concatenate 2 strings
 * @dest: pointer argument
 * @src: second pointer argument
 *
 * Return: return a pointer
 *
 */

char *_strcat(char *dest, char *src)
{
	char hold[100];
	int i;
	int j = 0;

	for (i = 0;; i++)
	{
		if (dest[i] == 0)
		{
			if (src[j] == 0)
			{
				break;
			}
			else
			{
				hold[i] = src[j];
				j++;
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
			break;
		}
		else
		{
			dest[i] = hold[i];
		}
	}

	return (dest);
}
