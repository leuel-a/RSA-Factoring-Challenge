#include "factors.h"

/**
 * open_file - This function opens the file supplied to av[1]
 * @pathname: 'pathname' is the name of the file to be opened
 *
 * Return: Nothing
 */

void open_file(char *pathname)
{
	FILE *fd;

	fd = fopen(pathname, "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", pathname);
		exit(EXIT_FAILURE);
	}
}
