#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: the file to read
 * @letters: the number of chars to read
 *
 * Return: number of lettres it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (_write);

}
