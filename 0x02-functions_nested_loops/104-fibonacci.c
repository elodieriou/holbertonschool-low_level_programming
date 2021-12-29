#include <stdio.h>

/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Return: 0 always success
 */
int main(void)
{
	unsigned long long int i, num1 = 0, num2 = 0, nextNum;

	for (i = 0; i < 98; i++)
	{
		nextNum = num1 + num2;
		num1 = num2;
		num2 = nextNum;
		printf("%lld", nextNum);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
