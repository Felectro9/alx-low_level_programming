#include"main.h"
/**
 * main - entry point
 * Description - prints lower case alphabetsten times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int row, ch;

	for (row = 0; row <= 9; ++row)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		putchar('\n');
	}
}
