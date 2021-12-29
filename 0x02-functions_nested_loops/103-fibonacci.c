#include <stdio.h>

/**
 * main - function that print the Fibonacci sequence whose values
 * do not exceed 4,000,000
 * Return: 0 always success
 */
int main(void)
{
	long int i, num1 = 0, num2 = 1, sum = 0, nextNum;

	for (i = 0; i < 50; i++)
	{
		nextNum = num1 + num2;
		num1 = num2;
		num2 = nextNum;

		if (nextNum % 2 == 0 && nextNum < 4000000)
			sum += nextNum;
	}
	printf("%ld\n", sum);
	return (0);
}
