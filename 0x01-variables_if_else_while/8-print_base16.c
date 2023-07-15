#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int hex;
	for (hex = 0; hex < 16; hex++)
	{
		if (hex < 10)
		{
			putchar (hex + '0');
		}
		else if (hex >= 10)
		{
			putchar (hex + 87);
		}
	}
putchar('\n');
return (0);
}
