#include <stdio.h>
# include <math.h>

/**
 * main - print the largest prime factor of the number "612852475143"
 *
 * Return: Always success
 */
int main(void)
{
	long int n = 612852475143, i;

	for (i = 3; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
