#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * if multiples of three print Fizz
 * if multiples of five print Buzz
 * if mutliples of three and five print FizzBuzz
 *
 * Return: Alaways success
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3  == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");

		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
