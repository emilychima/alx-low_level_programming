#include main.h

/**
 * print_alphabet - print all alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; lettter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (0);
}
