#include "main.h"

/**
 * _abs - check main
 * @r: an integre input
 * Description: this function returns absolute value of a number
 * Return: Absolute value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
