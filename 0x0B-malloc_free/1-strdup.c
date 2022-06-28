#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function to copy a string
 *
 * @str: the string argument
 *
 * Return: a pointer to the string
 */

char *_strdup(char *str)
{
	char *string;
	int i, count = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0;; i++)
	{
		if (str[i] == 0)
		{
			break;
		}
		count++;
	}

	string = malloc(sizeof(*string) * count);
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0;; i++)
	{
		if (i >= count)
		{
			string[i] = '\0';
			break;
		}
		string[i] = str[i];
	}

	return (string);
}
