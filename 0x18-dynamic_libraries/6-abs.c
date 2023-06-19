#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @num: the number to be computed.
 * Return: Absolute value of number or zero
 */

int _abs(int num)
{

	if (num < 0)
	{
	num *= -1;
	}
	return (num);
}