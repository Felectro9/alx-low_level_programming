/**
 * memcpy - function to copy memory area
 * @dest: a buffer to copy from
 * @src: what we are to copy
 * @n: n bytes of @src
 * Return: Always 0 (succes)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
		dest[i] = src[i];
	return(dest);
}
