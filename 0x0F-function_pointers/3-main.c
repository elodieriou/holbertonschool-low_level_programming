#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that performs simple operation
 *
 * @argc: the number of arguments
 * @argv: an array of size argc
 *
 * Return: the result of operration
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;
	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];

	if ((*operator != '+' && *operator != '-' && *operator != '*' &&
	    *operator != '/' && *operator != '%') || strlen(operator) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	fp = get_op_func(operator);

	printf("%d\n", fp(num1, num2));
	return (0);
}
