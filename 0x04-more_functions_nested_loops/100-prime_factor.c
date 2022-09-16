#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime = 612852475143, div = 2, maxFact;

	while (prime != 0)
	{
		if (prime % div != 0)
			div++;
		else
		{
			maxFact = prime;
			prime /= div;
			if (prime == 1)
				break;
		}
	}

	printf("%ld\n", maxFact);

	return (0);
}
