#include "main.h"
#include <stdio.h>

/**
 * close_check - check the close function for error
 *
 * @num: the return value from the function
 * @fd: the file descriptor passed to the close function
 *
 * Return: 0 on success, or exit if condition is true
 */

int close_check(int num, int fd)
{
	if (num <= -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
 * copy - a program that cpies the content of a file to another file
 *
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: an int
 */

int copy(char *file_from, char *file_to)
{
	int pr1, pr2, rtrn1, rtrn2, close1, close2;
	char buf[1025];
	mode_t old_mask = umask(0);

	pr1 = open(file_from, O_RDONLY);
	if (pr1 <= -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	rtrn1 = read(pr1, buf, 1024);
	if (rtrn1 <= -1)
	{
		close1 = close(pr1);
		close_check(close1, pr1);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buf[rtrn1] = '\0';
	close1 = close(pr1);
	close_check(close1, pr1);

	pr2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (pr2 <= -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	rtrn2 = write(pr2, buf, rtrn1);
	if (rtrn2 <= -1)
	{
		close2 = close(pr2);
		close_check(close2, pr2);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	close2 = close(pr2);
	close_check(close2, pr2);
	umask(old_mask);
	return (1);
}

/**
 * main - the main function
 *
 * @argc: the number of input passed
 * @argv: pointer to a string of input
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy(argv[1], argv[2]);

	return (0);
}

