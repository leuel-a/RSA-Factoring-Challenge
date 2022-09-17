#include "rsa.h"

/**
 * num_line - Finds the number of lines in a file
 * @fd: A file pointer that points to the file to
 * be checked
 *
 * Return: The number of lines
 */
int num_line(FILE *fd)
{
	char c;
	int count = 0;

	for (c = getc(fd); c != EOF; c = getc(fd))
		if (c == '\n')
			count = count + 1;
	fseek(fd, 0, SEEK_SET);
	return (count);
}
