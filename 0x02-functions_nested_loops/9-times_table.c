#include "main.h"
/**
 * times_table - enery point
 * Return: nothing
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;

			if (r > 9)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else
				_putchar(r + '0');
			if (j != 9)
			{
				putchar(44);
				putchar();
		}
		_putchar('\n');
	}
}
