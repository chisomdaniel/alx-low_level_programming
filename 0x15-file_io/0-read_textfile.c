#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - a function thats reads a text file
 * and prints it to POSIX standard output
 *
 * @filename: the name of the file
 * @letters: the number of letters it could read and print
 *
 * Return: the actual number of letters it could read and print
 * or 0 if the file can not be opened or read,
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of byte return 0
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int pr, letter_num, written;
	char *word;

	if (filename == NULL)
		return (0);

	pr = open(filename, O_RDONLY | O_CREAT, 600);
	if (pr <= -1)
	{
		return (0);
	}

	word = malloc(sizeof(char) * letters + 1);
	letter_num = read(pr, word, letters);
	if (letter_num <= -1)
	{
		close(pr);
		return (0);
	}

	word[letter_num] = '\0';

	written = write(1, word, letter_num);
	if (written <= -1 || written != letter_num)
	{
		close(pr);
		return (0);
	}

	close(pr);
	free(word);
	return (letter_num);
}
