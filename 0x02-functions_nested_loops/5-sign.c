#include "main.h"

/**
 * print_sign - check Main
 * @n: an input number
 * Description: this function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if the number is negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
