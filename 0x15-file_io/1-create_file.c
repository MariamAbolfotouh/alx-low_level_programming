#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: name of the file
 * @text_content: content of the text
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i;
	ssize_t n = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);
	if (l)
		n = write(i, text_content, l);
	close(i);
	return (n == l ? 1 : -1);
}
