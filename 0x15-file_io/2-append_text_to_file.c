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
 * append_text_to_file - function that appends text at the end of a file
 * @filename: a pointer to the filename
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	char *buffer = text_content;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);

	if (text_content)
		write(o, buffer, _strlen(text_content));

	close(o);
	return(1);
}
