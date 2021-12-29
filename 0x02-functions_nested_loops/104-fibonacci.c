#include <stdio.h>

/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Return: 0 always success
 */
int main(void)
{
	long unsigned int i, num1 = 0, num2 = 1, nextNum;

	for (i = 0; i < 98; i++)
	{
		nextNum = num1 + num2;
		num1 = num2;
		num2 = nextNum;
		printf("%lu", nextNum);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
