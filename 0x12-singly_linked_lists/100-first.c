#include "lists.h"

void startup_before_main(void) __attribute__ ((constructor));

/**
 * startup_before_main - function taht start before the main function
 * Return: Nothing
 */
void startup_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
