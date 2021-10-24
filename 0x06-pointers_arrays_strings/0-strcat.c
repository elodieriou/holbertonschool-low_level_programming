#include "main.h"

/**
 * *_strcat - fonction that concatenates two strings
 *
 * @dest: variable that receives the string of vartiable src
 * @src: sting copy and add to the variable dest string
 *
 * Return: pointer to the resulting variable dest string
 */
char *_strcat(char *dest, char *src)
{
	int i, k;

	for(i = 0; dest[i] != '\0'; i++)
	{
		i = i + 1;
	}
	for(k = 0; src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
