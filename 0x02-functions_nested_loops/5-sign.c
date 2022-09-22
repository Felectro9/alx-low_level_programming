#include"main.h"
/**
 * print_sign - print + if n is greater than zero, 0 if n is zero and - if is less than 0
 * @n takes integer input for function
 * Return: 1 if +, 0 if n is 0, and -if n is -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return(-1);
	}
}
