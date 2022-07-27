#include "main.h"

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
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}

/**
 * copy - a program that cpies the content of a file to another file
 *
 * Return: an int
 */

int copy(char *file_from, char *file_to)
{
	int pr1, pr2, rtrn1, rtrn2, close1, close2;
	char buf[1025];


	pr1 = open(file_from, O_RDONLY);
	if (pr1 <= -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	rtrn1 = read(pr, buf, 1024);
	if (rtrn1 <= -1)
	{
		close1 = close(pr);
		close_check(close1, pr1);
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buf[rtn1] = '\0';
	close1 = close(pr1);
	close_check(close1, pr1);

	pr2 = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0661);
	if (pr2 <= -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	rtrn2 = write(pr2, buf, 1024);
	if (rtrn2 <= -1)
	{
		close2 = close(pr2);
		close_check(close2, pr2);
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	close2 = close(pr2);
	close_check(close2, pr2);

	return (1);
}



int main(int argc, char **argv)
{
	return (0);
}

