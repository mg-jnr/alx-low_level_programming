#include "main.h"
/**
 * print_alphabet_x10 - Displays the alphabet in lowercase x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int j = 0;

	while (j <= 9)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
}
