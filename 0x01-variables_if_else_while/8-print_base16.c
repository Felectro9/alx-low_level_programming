#include <stdio.h>

/**
 * main -Entry point
 * Description - printsnumbers with base 16 
 * return - always (0)
 */
int main(void)
{
	int n = 48;
	
	while(n <= 102)
	{
	putchar(n);

	if (n == 57)
	n += 39;
	++n;+

	++n;
	}
	putchar('\n');

	return (0);
}	
