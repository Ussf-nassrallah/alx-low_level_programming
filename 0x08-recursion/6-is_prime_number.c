#include "main.h"

int prime_num(int num, int inum);

/**
 * is_prime_number - function that checks if the number is a prime number
 * @n: number will be checked
 * Return: 1 IF the number is prime number ELSE return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_num(n, n - 1));
	}
}

/**
 * prime_num - function that calculate if a number is prime
 * @num: number will be checked in prime_num function
 * @inum: iterator number
 * Return: 1 IF num is prime else return 0
 */

int prime_num(int num, int inum)
{
	if (inum == 1)
	{
		return (1);
	}
	else if (num % inum == 0 && inum > 0)
	{
		return (0);
	}
	else
	{
		return (prime_num(num, inum - 1));
	}
}
