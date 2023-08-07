#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the giving filename
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nbrCharWrite = 0, nbrCharReads = 0;
	int fd;
	char *buff = NULL;

	if (!filename)
		return (0);
	/* Open a file */
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters + 1);
	if (!buff)
		return (0);
	/* Read from a file */
	nbrCharReads = read(fd, buff, letters);
	if (nbrCharReads < 0)
	{
		free(buff);
		return (0);
	}
	nbrCharWrite = write(STDOUT_FILENO, buff, nbrCharReads);
	if (nbrCharWrite < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	/* Close a file */
	close(fd);
	return (nbrCharWrite);
}
