#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char abc;

	abc = 'a';
	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	abc = 'A';
	while (abc <= 'Z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
