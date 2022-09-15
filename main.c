#include "factors.h"

/**
 * main - Entry point for my program
 * @ac: This is the number of arguments supplied to the program
 * @av: These are the argument vector supplied (names of the argument)
 *
 * Return: On success, it returns 0
 */
int main(int ac, char **av)
{
	if (ac != 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		exit(EXIT_FAILURE);
	}
	open_file(av[1]);
	return (0);
}
