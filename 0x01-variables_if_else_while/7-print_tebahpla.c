#include <stdio.h>

/**
 *
 * main - Entry point 
 *
 * Description - print alphabets in reverse
 *
 * Return: 0 Always
 */
int main(void)
{
	char ch = 'z';

	while ( ch >= 'a' )
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
