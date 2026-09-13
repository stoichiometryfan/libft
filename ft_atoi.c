#include <stddef.h>
#include <stdio.h>
#include "libft.h"
int ft_atoi(char *nptr)
{
	int sign=1;
	int res=0;
	int big = 2147483647;
	int min= -2147483648;

	while(*nptr==' ' ||(*nptr>=9 && *nptr<=13))
	{
		nptr++;
	}
	if(*nptr=='-' ||*nptr=='+')
	{
		if(*nptr=='-')
			sign=-1;
		nptr++;
	}
	while(*nptr!='\0')
	{
		if(*nptr >= '0' && *nptr <= '9')
		{
			int digit=*(nptr) - '0';
			if(res > big / 10 || (res == big / 10 && digit> big % 10 ))
				return (sign == 1) ? big : min;
			res = res * 10 + digit;
		}
		else
			break;
		nptr++;
	}
	return sign*res;
}
