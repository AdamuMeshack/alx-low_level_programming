#include<stdio.h>
/**
 * main - print the alphebet in lower followed by newline
 *
 * Description: using the main function
 *
 * Return: 0
 */
int main(void)
{
	char low;
	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
		{
		putcher(low);	
		}
	}
	putchar('\n');
	
	return (0);
}
