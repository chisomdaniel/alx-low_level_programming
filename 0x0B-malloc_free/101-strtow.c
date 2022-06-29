#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - a function that splits a string into words
 * 
 * @str: the string passed as an argument
 * 
 * Return: an array of arrays
 */

char **strtow(char *str)
{
	char **string;
	int i, j = 0, k = 0, hold, words = 0, letters = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ' || str[i + 1] == '\0') && str[i - 1] != ' ')
		{
			words++;
		}
	}
	printf("words are: %d\n", words);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			hold++;
		}
		if ((str[i] == ' ' || str[i + 1] == '\0') && str[i - 1] != ' ')
		{
			if (hold > letters)
			{
				letters = hold;
				hold = 0;
			}
		}
	}
	printf("letters are: %d\n", letters);

	string = malloc(sizeof(*string) * words);
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < words - 1; i++)
	{
		string[i] = malloc(sizeof(string) * letters);
	}

	for (i = 0; i < words; i++)
	{
		for (j = 0; str[k] != ' '; j++)
		{
			string[i][j] = str[k];
			k++;
		
			if ((str[k] == ' ' || str[k + 1] == '\0') && str[k - 1] != ' ')
			{
				string[i][j] = '\0';
				k++;
			}
		}
	}

	return (string);
}

