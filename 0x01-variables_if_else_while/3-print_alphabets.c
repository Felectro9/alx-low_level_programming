# include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print alphabets, lower case and upper case
 *
 * return 0 (Always/Success)
 */

int main(void)
{
	char alp = 'a';
        char ALP = 'A';
	
	while (alp <= 'z')
	{
		putchar(alp);
		++alp;
	}


	while (ALP <= 'Z')
	{
		putchar(ALP);
		++ALP;
	}
	putchar('\n');

	return (0);
}
