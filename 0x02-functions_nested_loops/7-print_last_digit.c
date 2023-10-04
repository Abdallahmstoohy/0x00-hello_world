#include "main.h"
/**
 * print_last_digit - entry point
 * @n: coco wawa
 * Return: result
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
	result = -1 * (n % 10);
	else
	result = n % 10;
	_putchar(result + '0');
	return (result);
}
