/**
 * binary_to_uint - turns binary to int
 * @b: a binary number
 * Return: te converted ecimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		n = n * 2;
		if (b[i] == '1')
			n++;
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	return (n);
}
