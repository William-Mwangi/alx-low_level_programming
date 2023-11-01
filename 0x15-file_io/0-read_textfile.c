#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reading a text file
 * @filename: file name
 * @letters: letters
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	ssize_t bytes_read = read(fd, buffer, letters);
	char *buffer = (char *)malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_written);
}
