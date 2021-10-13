#include <string.h>
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
	strcat (dest, src);
	return (dest);
}
