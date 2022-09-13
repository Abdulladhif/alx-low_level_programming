#include "main.h"
/**
*print_alphabet - function that print alphabet
*it prints in lowercase and new line
*Return: no return
*/
void print_alphabet(void)
{	
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
