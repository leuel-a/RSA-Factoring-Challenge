#include "rsa.h"

/**
 * main - Entry point for my program
 * @ac: The number of command line arguments
 * @av: An array that holds the command line arguments as
 * string a string array
 *
 * Return: On success, it returns 0. On faliure, it returns
 * -1.
 */
int main(int ac, char **av)
{
	char **num_str;
	int n = 0, i;
	mpz_t num_from_str;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: ./factors <file_name>\n");
		exit(EXIT_FAILURE);
	}
	num_str = read_file(av[1], &n);
	for (i = 0; i < n; i++)
	{
		mpz_set_str(num_from_str, num_str[i], 10);
		find_factor(num_from_str);
	}
	exit(EXIT_SUCCESS);
}
