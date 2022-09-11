#include<stdio.h>
/**
 * main - print single digit numbers starting from 0
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: return 0 at the end
 */
int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 99)
	{
		j = (i / 10 + '0');
		k = (i % 10 + '0');
		if (j < k)
		{
			putchar(j);
			putchar(k);
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
		}
		}
		i++;
	}
		putchar('\n');
		return (0);
}
