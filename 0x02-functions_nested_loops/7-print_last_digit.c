#include"main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: takes number input
 * Return: lastdigit
 */
int print_last_digit(int n)
{
	int lastD;
	if (n < 0)
		lastD = -1 * (n % 10);
	else
		lastD = n % 10;

	_putchar(lastD + '0');
	return (lastD);
}
