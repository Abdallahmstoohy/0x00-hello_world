#include "main.h"
/**
 * _islower - Entery point
 * @c: the character to check
 * Return: 0,1
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
		return (0);
}
