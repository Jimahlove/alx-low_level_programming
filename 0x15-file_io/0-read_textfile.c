#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: read the text file
 * @letters: the number of letters read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bul;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bul = malloc(sizeof(char) * letters);
	t = read(fd, bul, letters);
	w = write(STDOUT_FILENO, bul, t);

	free(bul);
	close(fd);
	return (w);
}

