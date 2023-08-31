#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int res;
	unsigned int base = 0;

	if (!b)
		return (0);

	for (res = 0; b[res]; res++)
	{
		if (b[res] < '0' || b[res] > '1')
			return (0);
		base = 2 * base + (b[res] - '0');
	}

	return (base);
}
