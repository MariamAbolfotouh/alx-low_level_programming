#include "main.h"

/**
 * Description:  print_alphabet - utilizes the putchar function to
 * print the alphabet
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
