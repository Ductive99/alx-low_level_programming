#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it,
 * to the POSIX standard output
 *
 * @letters: the number of letters it should read and print
 * @filename: the name of the file to read from
 *
 * Return: the number of letters it could read and print
 * 0 -> if the file can't be opened
 * 0 -> if the filename is NULL
 * 0 -> if write fails or doesn't write the expected amount of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, j;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	i = read(fd, buffer, letters);

	if (i < 0)
	{
		free(buffer);
		close(fd);
	}
	buffer[i] = '\0';
	close(fd);

	j = write(STDOUT_FILENO, buffer, i);
	if (j < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (j);
}
