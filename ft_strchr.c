#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	unsigned ch;

	ch=(unsigned char)c;
	while(1)
	{
		if ((unsigned char)*s == ch)
			return (char *)s;
		if (*s=='\0')
			return '\0';
		s++;
	}

	
}
