#include "main.h"

/**
 * print_alphabet - check description
 * Description: it prints the alphabet in lowercase followed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
