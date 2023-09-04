#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

/**
 * create_file - Creates a file with the specified name and writes the provided text content into it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write into the file.
 *
 * Return: 1 on success, -1 on failure.
 *   If the file already exists, it truncates the file and writes the new content.
 *   If filename is NULL, returns -1.
 *   If text_content is NULL, creates an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
