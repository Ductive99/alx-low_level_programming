#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: file name :)
 * @text_content: the string to append to the file
 *
 * Return: 1 -> success ; -1 -> failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, j = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		j = write(fd, text_content, i);
		if (i != j)
			return (-1);
	}
	close(fd);

	return (1);
}
