#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: ist  integer to be swapped 
 * @b: @nd integer to be swapped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
