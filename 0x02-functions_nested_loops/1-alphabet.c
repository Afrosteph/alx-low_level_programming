#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char al;

	for  (al = 'a'; al <= 'z'; al++)
		_putchar(al);

	_putchar('\n');
}
