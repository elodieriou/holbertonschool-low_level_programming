#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: string
 *
 * Return: size of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * create_file - function that creates a file
 * @filename: a pointer to the filename
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o;
	char *buffer = text_content;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
		return (-1);

	if (text_content)
		write(o, buffer, _strlen(text_content));

	close(o);
	return (1);
}
