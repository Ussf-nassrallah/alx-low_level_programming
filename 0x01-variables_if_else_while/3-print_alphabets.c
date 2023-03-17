#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	/* lc represent lowercase character */
	/* uc represent uppercase character */
	char lc, uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	};

	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	};

	putchar('\n');

	return (0);
}
