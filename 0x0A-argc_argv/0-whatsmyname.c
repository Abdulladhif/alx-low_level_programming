#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 *
 * Return: 0 always for success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
