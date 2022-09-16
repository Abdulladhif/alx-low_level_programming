#include <stdio.h>

/**
 *main  - Prints the numbers 1-100,
 *but for multiples of three Fizz is printed,
 *for multiples of five Buzz is printed,
 *for numbers which are multiples of three and five FizzBuzz is printed
 *
 *Return: 0 always
 */

int main(void)
{
	int num;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
