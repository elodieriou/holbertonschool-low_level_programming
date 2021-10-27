#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints the minimum number of coins to
 * make change for an amount of money
 *
 * @argc: the number of arguments
 * @argv: an array of size argc but variable not used
 *
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int cents, coins, i;
	int change[5] = {25, 10, 5, 2, 1};
	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	cents = atoi(argv[1]);

	for (i = 0; cents > 0; i++)
	{
		coins += cents / change[i];
		cents %= change[i];
	}
	printf("%d\n", coins);
	return (0);
}
