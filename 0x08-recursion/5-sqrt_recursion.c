#include "main.h"

int square_root(int x, int y);

/**
 * _sqrt_recursion - function that returns the natural square root
 * @n: the number will be operated
 * Return: ( int ) natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (square_root(n, 0));
	}
}

/**
 * square_root - returns the natural square root based on two numbers(x, y)
 * @x: the first number will be operated
 * @y: the second number will be operated
 * Return: (int) square root
*/

int square_root(int x, int y)
{
	if (x < y * y)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	else
	{
		return (square_root(x, y + 1));
	}
}
