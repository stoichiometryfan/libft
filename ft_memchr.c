#include "libft.h"
#include <stddef.h>
void *ft_memchr(const void *ptr,int c,unsigned int n)
{
	unsigned char ch;
	const unsigned char *str;

	ch=c;
	str=(const unsigned char *)ptr;
	while(n)
	{
		if(*str==ch)
			return (void *) ptr;
		//if(*ptr!=ch)
		//	return '\0';
		str++;
		n--;
	}
	return NULL;
}
#include <stdio.h>
int main()
{
	char data[]={'t','j','h','g','f','d','a'};
	printf("%p",ft_memchr(data,'z',5));
}
