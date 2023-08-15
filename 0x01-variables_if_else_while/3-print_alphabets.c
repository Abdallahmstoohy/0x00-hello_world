#include <stdio.h>
/**
 * main - alphabet all
 * all the alphabet will be printed
 * Return: 0
 */
int main(void)
{
	int i;
	int l;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (l = 65; l <= 90; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
