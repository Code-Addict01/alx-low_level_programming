#include "main.h"

/**
 * read_textfile - reads a text file and prints is to the
 * POSIX standard output
 * @filename: name of file holding the text
 * @letters: number of letters to be printed
 *
 * Return: number of letters printed on succes, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);

	free(buf);

	return (wr);
}

