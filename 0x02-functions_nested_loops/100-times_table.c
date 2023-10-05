#include "main.h"
/**
 * print_times_table - entry point
 * @n: no baby
 * Return: nothing
 */
void print_times_table(int n)
{
	if ((n < 15) && (n >= 0))
	{
		int i, j, r;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			for (j = 1; j <= n; j++)
			{
				_putchar(' ');
				r = i * j;
				if (r > 99)
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
				else if ((r > 9) && (r < 100))
				{
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else if ((r > 0) && (r < 10))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				if (j != n)
					_putchar(',');
				if (r == 0)
					_putchar(r + 'o');
			}
			_putchar('\n');
		}
	}
}
