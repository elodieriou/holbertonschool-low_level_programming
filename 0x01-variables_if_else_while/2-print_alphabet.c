#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		/**
		 * for (départ; condition; action)
		 * départ : commence par 'a'
		 * condition : tant que n n'est pas = z
		 * action : ajoute +1 à chaque fois
		 * la boucle s'exécutera 26 fois
		 */

		putchar (n);
	/**
	 *putchar : renvoie un entier
	 */

	putchar ('\n');
	return (0);
}
