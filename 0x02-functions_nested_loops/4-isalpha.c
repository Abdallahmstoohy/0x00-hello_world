#include "main.h"
/**
 * _isalpha - Entery point
 * @c: is a parameter poming nga
 * Return: 0,1
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97 || c <= 90 && c >= 65)
	{
		return (1);
	}
	else
		return (0);
}
