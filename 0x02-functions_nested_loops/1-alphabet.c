#include"main.h"
/**
 *
 *Description - print alphabets a - z in lower case
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; ++alp)
		_putchar(alp);
	_putchar('\n');
}
