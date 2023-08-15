#include <stdio.h>
/**
 * main - execept q && e
 * this is the qoqo wawa
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 113 && i != 101)
			putchar(i);
	}
	return (0);
}
