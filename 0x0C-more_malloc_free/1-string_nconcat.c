#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: n bytes from the first string
 *
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i, count1, count2, size;
	int j = 0;
	unsigned int k = 0;

	count1 = count2 = 0;
	for (i = 0;; i++)  /*count first string*/
	{
		if (s1 == NULL || s1[i] == 0)
		{
			break;
		}
		count1++;
	}
	for (i = 0;; i++)  /*count second string*/
	{
		if (s2 == NULL || s2[i] == 0)
		{
			break;
		}
		count2++;
	}

	size = count1 + count2;
	if (size == 0)
	{
		concat = malloc(sizeof(*concat) * 1);
		concat[0] = '\0';
		return (concat);
	}
	concat = malloc(sizeof(*concat) * size + 1);
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (i >= count1 && count2 != 0)
		{
			if (k >= n)
			{
				concat[i] = '\0';
				break;
			}
			concat[i] = s2[j];
			j++;
			k++;
		}
		else if (count1 != 0 && i < count1)
		{
			concat[i] = s1[i];
		}
	}

	return (concat);
}

