#include "rsa.h"

/**
 * read_file - reads the content of a file
 * @path: The name of the file to be opened
 * @num: The number of lines that will be read from the file
 *
 * Description: This function will assume that all the contents of
 * the file specified by pathname will be numbers(on number per line)
 *
 * Return: On success, it returns an array of strings containing
 * the contents of the file
 */
char **read_file(char *path, int *num)
{
	FILE *fd;
	char *lineptr = NULL;
	size_t n = 0;
	char **str_num_arr = NULL;
	int  i = 0;

	fd = fopen(path, "r");

	if (fd == NULL)
	{
		fprintf(stderr, "Error: unable to open file %s\n", path);
		exit(EXIT_FAILURE);
	}
	*num = num_line(fd);
	str_num_arr = (char **)malloc(sizeof(char *) * (*num));
	if (str_num_arr == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	while (getline(&lineptr, &n, fd) != -1)
	{
		str_num_arr[i] = (char *)malloc(sizeof(char) * (strlen(lineptr) + 1));
		strcpy(str_num_arr[i], lineptr);
		i++;
	}
	fclose(fd);
	return (str_num_arr);
}
