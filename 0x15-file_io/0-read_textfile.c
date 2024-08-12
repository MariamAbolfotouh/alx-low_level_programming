#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t n;
	char BUF[1024 * 8];

	if (!filename || !letters)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	n = read(i, &BUF[0], letters);
	n = write(STDOUT_FILENO, &BUF[0], n);
	close(i);
	return (n);
}
