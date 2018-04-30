
#include "header.h"
#include <stdlib.h>

char    *getSum(char *a, char *b)
{
    char    *c;
    int		extra;

    c = calloc(7, sizeof(char));
	extra = 0;
    for (int i = 5; i >= 0; i--)
    {
        if (a[i] == '0' && b[i] == '0')
		{
			if (extra > 0)
			{
				c[i] = '1';
				extra--;
			}
			else
            	c[i] = '0';
		}
        else if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
		{
			if ( extra > 0)
				c[i] = '0';
			else
            	c[i] = '1';
		}
        if (a[i] == '1' && b[i] == '1')
		{
			if (extra > 0)
				c[i] = '1';
			else
			{
            	c[i] = '0';
				extra++;
			}
		}
    }
	c[6] = '\0';
	return (c);
}

int     toInt(char *bits)
{
	return (atoi(bits));
}