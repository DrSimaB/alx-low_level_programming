#include "main.h"

/**
 *_abs - Calculates the absolute value of an integer.
 * @a: The integer we are calculating the absolute value of.
 *
 * Return: Always 0.
 */

int _abs(int a)
{
	int absolut;

	if (a < 0)
		absolut = a * (-1);
	else
		absolut = a;
	return (absolut);
}
