#ifndef RSA_H
#define RSA_H

#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **read_file(char *path, int *num);
int num_line(FILE *fd);
void find_factor(mpz_t n);

#endif
