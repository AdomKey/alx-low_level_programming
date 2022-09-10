#include <stdio.h>
/**
 * mian - all single base ten numbers
 *
 * Description: using the main function
 * this program prints "Base ten numbers
 * Return: 0
 */
in main(void)
{
	int n;

	for (n = '1' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
