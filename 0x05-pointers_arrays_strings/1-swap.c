#include "main.h"

/**
 * swap_int - swap value store in a and b
 *
 * @swap: swap value
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
