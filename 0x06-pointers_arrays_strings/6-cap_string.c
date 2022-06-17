#include <stdio.h>

/**
 * cap_string - capitalise all words of a string
 *
 * @n: string
 *
 * Return: return a pointer to the variable
 *
 */

char *cap_string(char *n)
{
	int i, j;
	char hold[999];

	for (i = 0;; i++)
	{
		if (n[i] == 0)
		{
			break;
		}
		else if ((n[i] - 1 == ' ' || '\t' || '\n' || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}') && (n[i] >= 97 && n[i] <= 122))
		{
			hold[i] = n[i] - 32;
		}
		else
		{
			hold[i] = n[i];
		}
	}
	printf("hold word is: %s\n", hold);

	for (j = 0;; j++)
	{
		if (hold[j] == 0)
		{
			break;
		}
		else
		{
			n[j] = hold[i];
		}
	}
	printf("word is: %s\n", n);

	return (n);
}
