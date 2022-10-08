/**
 * memset - function that fills a memory with a constant byte
 * @s: input pointer to character data type represents pointer to the block of memory to fill
 * @b: input variable of character type, represents characters to fill
 * @n: unsigned interger variable, represents number of variables to be filled
 * Return: A pointer to the filled memory area in s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for(i = 0; i < n; i++)
		s[i] = b;

	return(s);
}

