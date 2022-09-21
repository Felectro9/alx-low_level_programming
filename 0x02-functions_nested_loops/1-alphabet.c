#include"main.h"
/**
 * print alphabet-uses putchar function to a - z
 *
 */
void print_alphabet(void)
{
	int alp;
	
	for (alp = 'a'; alp <= 'z'; ++alp)
		_putchar(alp);
	_putchar('\n');
}	
