#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string hosting  binary NO.
 *
 * Return:  converted No.
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int conv_no = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		conv_no = 2 * conv_no + (b[k] - '0');
	}

	return (conv_no);
}
