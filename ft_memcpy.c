#include "libft.h"
#include <stddef.h>
void *ft_memcpy(void *dest,const void *src,size_t n)
{
	unsigned char* dptr=(unsigned char *)dest;
	const unsigned char* sptr=(const unsigned char *)src;
	size_t i;

	i=0;
	while(n)
	{
		*(dptr+i)=*(sptr+i);
		i++;
		n--;
	}
	return dest;
}
