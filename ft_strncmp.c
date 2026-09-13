#include <stddef.h>
#include "libft.h"
int ft_strncmp(const char *s1,const char *s2,size_t n)
{
	size_t i;

	i=0;
	const unsigned char *st1=(const unsigned char *)s1;
	const unsigned char *st2=(const unsigned char *)s2;
	while(n)
	{
		if(*(st1+i)>*(st2+i))
			return st1[i]-st2[i];
		if(*(st1+i)<*(st2+i))
			return st1[i]-st2[i];
		i++;
		n--;
		
	}
	return 0;
}
