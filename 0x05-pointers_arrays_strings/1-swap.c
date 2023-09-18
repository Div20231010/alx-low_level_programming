#include "main.h"
/**
 * swap_int - swaps of two integers
 * @a - integer to swap
 * @b - integer to swap
 */
vooid swap_int(int *a, int *b)
{	
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

