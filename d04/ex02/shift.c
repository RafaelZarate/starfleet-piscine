
#include "header.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void handlePositiveShift(char *b, char *shifted, int k, int len)
{
	int	i = 0;
	
	for (int j = (len - (k % len)); j > 0; j--)
	{
		if (b[i] && shifted[i + k])
			shifted[i + k] = b[i];
		i++;
	}
	shifted[len] = '\0';
}

char *leftShift(char *bin, int k)
{
	k++;
	return (bin);
}

char *rightShift(char *bin, int k)
{
	char	sign, *shifted;
	int		len;

	sign = bin[0];
	len = strlen(bin);
	shifted = malloc(sizeof(char) * len + 1);
	memset(shifted, '0', len + 1);
	shifted[len] = '\0';
	if (sign == '0')
		handlePositiveShift(bin, shifted, k, len);
	return (shifted);
}

int		power(int x, int y)
{
	int	value;

	value = 1;
	while (y-- > 0)
		value *= x;
	return (value);
}

int     toInt(char *bits)
{
	int	result, j, i;

	result = j = 0;
	i = strlen(bits);
	for (i -= 1; i >= 0; i--)
	{
		if (bits[i] == '1')
			result += power(2, j);
		j++;
	}
	return (result);
}