#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the giving string
 * Return: the length
 */
size_t _strlen(char *str)
{
	size_t len = 0;
	int i = 0;

	while (str[i++])
		len++;
	return (len);
}

/**
 * create_file - create a file
 * @filename: the giving filename
 * @text_content: A string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nbrCharWrite = 0;
	size_t count = 0;

	if (!filename)
		return (-1);
	/* Open the file */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		/* Get the length of the content */
		count = _strlen(text_content);
		nbrCharWrite = write(fd, text_content, count);
		if (nbrCharWrite < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
