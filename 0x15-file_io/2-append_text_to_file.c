#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the giving filename
 * @text_content: the giving text to append at the end of a file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	size_t count = 0;
	ssize_t nbrChars = 0;

	if (!filename)
		return (-1);
	/* Open the file to append */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	/* check if text is not null to write it */
	if (text_content)
	{
		while (text_content[i])
		{
			count++;
			i++;
		}
		nbrChars = write(fd, text_content, count);
		if (nbrChars < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
