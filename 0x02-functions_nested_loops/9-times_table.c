#include"main.h"
/**
 * times_table - outputs the nine times table
 */
void times_table(void)
{
	int n, times, result;

	for (n = 0; n <= 9; ++n)
	{
		_putchar(48);
		for (times = 1; times <= 9; ++times)
		{
			_putchar(',');
			_putchar(' ');

			result = n * times;

			if (result <= 9)
				_putchar(' ');
			else
				putchar((result / 10) + 48);

			putchar((result % 10) + 48);
		}
		putchar('\n');

	}
}
