#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int comb;

	for (comb = 0; comb > 10; comb++)
	{
		putchar(comb + ',' + '0');
	}
	for (comb = 9; comb >= 0; comb--)
	{
		putchar(comb + ',' + '0');
	}
putchar('\n');
return (0);
}
