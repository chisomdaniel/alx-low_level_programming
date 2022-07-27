#include "main.h"
#include "stdio.h"

/**
 * append_text_to_file - a function that appends text to the end of a file
 *
 * @filename: the name of the file
 * @text_context: content to be written in the file
 *
 * Return: 1 on success, -1 on faliure
 */

int append_text_to_file(const char *filename, char *text_context)
{
	int pr, rt, count = 0, i = 0;  /* rt stands for return */

	if (filename == NULL)
		return (-1);

	pr = open(filename, O_WRONLY | O_APPEND);
	if (pr <= -1)
		return (-1);

	while (text_context[i] != '\0')
	{
		count++;
		i++;
	}

	if (text_context != NULL)
	{
		rt = write(pr, text_context, count);
		if (rt <= -1)
		{
			printf("couldnt write\n");
			close(pr);
			return (-1);
		}
	}
	else
	{
		close(pr);
		return (1);
	}

	close(pr);
	return (1);
}
