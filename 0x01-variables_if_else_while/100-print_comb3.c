#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int c;
	int d;

	for (c = 0; d < 100; c++)
	{
		c = 0;

		if (c < d)
		{
			putchar('0' + d);
			putchar('0' + c);

			if (d < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');

	return (0);
}
