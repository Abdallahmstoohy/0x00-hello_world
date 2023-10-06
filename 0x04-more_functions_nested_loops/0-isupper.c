#include "main.h"
/**
 * _isupper - entry point
 * @c: hola cola
 * Return: 0,1
 */
int _isupper(int c)
{
	if ((c <= 90) && (c >= 65))
		return (1);
	else
		return (0);
}
