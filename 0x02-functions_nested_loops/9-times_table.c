#include "main.h"

/**
 * times_tables - print multiplication table from 0 to 9
 */
void times_table(void)
{
	int i, j, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			c = i * j;

			/*format thr output*/
			if (c / 10 != 0)
				_putchar('0' + (c / 10));

			if (j != 9)
			{
				_putchar('0' + (c % 10));
				_putchar(',');
				_putchar(' ');
				if (c < 10)
					_putchar(' ');
			}
			else if (j == 9)
			{
				_putchar('0' + (c % 10));
				_putchar('\n');
			}
		}
	}
}
