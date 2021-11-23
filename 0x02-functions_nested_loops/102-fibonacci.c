#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the first 50 Fibonacci numbers, starting
 * with 1 and 2
 * Return: 0 always success
 */
int main(void)
{
	long int i, num1 = 0, num2 = 1, nextNum;

	for (i = 0; i < 50; i++)
	{
		nextNum = num1 + num2;
		num1 = num2;
		num2 = nextNum;
		printf("%ld", nextNum);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
