#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: content of the text
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	ssize_t n = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (l)
		n = write(i, text_content, l);
	close(i);
	return (n == l ? 1 : -1);
}

/**
 * _strlen - returns the length of the string
 *
 * @s: string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
