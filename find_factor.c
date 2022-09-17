#include "rsa.h"

/**
 * find_factor - This function finds the factors of a number
 * @n: This is the number that we will find the factor for
 *
 * Return: Nothing
 */
void find_factor(mpz_t n)
{
	mpz_t i, aux1, aux2;

	mpz_init(aux1);
	mpz_init(aux2);
	mpz_init_set_ui(i, 2);
	while (mpz_cmp(i, n) < 0)
	{
		mpz_div(aux1, n, i);
		mpz_mul(aux2, aux1, i);
		if (mpz_cmp(n, aux2) == 0)
		{
			gmp_printf("%Zd=%Zd*%Zd\n", n, aux1, i);
			break;
		}
		mpz_add_ui(i, i, 1);
	}
}
