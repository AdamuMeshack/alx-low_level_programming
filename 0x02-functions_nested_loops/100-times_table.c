#include "main.h"
/**
 * three_dig - prints the series of characters if i * j is > 100
 * @n: number to analyze
 *
 * Return: nothing
 */
void three_dig(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (product > 99)
				{
					three_dig(product);
				}
				else if (product / 10 > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar((product) % 10 + '0');
				}
				else if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else
					_putchar(product % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
