#include "main.h"

/**
  * _atoi - convert str to int
  * @s: the string
  *
  * Return: the number in integer
  */
int _atoi(char *s)
{
	unsigned int number = 0;
	int index = 0;
	int sign = 1;

	while (*(s + index))
	{
		if (*(s + index) == '-')
		{
			sign *= -1;
		}
		else if (*(s + index) >= '0' && *(s + index) <= '9')
		{
			number = (number * 10) + (*(s + index) - '0');
		}
		else if (number > 0)
		{
			break;
		}

		index++;
	}
	return (number * sign);
}
