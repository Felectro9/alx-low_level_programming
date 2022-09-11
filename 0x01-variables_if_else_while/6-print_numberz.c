#include <stdio.h>

/**
 * main -Entry point
 *
 * description - print number 0 to 10
 *
 * return: always 0 (success0
 */
int main(void)
{
int n = 0;

while (n <=9 ) {

	putchar(n + '0');
	++n;
}

putchar('\n');

return (0);
}
