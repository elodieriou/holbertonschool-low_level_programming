#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - a program that adds positive numbers
 *
 * @argc: the number of argument
 * @argv: an array of argc
 *
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int i, j, len, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		sum = 0;
		i = 1;
		len = strlen(argv[i]);

		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < len; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
