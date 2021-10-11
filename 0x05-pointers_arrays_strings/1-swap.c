#include "main.h"

/**
 * swap_int - swap value store in a and b
 *
 * @a: swap value 98 to 42
 * @b: swap value 42 to 98
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
