#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
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
char *ft_strdup(const char *s)
{
	size_t i;
	char* dupstr;
	size_t sizofdup;

	i=0;
	while(*(s+i)!='\0')
	{
		i++;
	}

	sizofdup = (i + 1) * sizeof(char);
	dupstr = (char *)malloc(sizofdup);

	if (dupstr == NULL)
		return NULL;

	ft_memcpy (dupstr ,s ,sizofdup);
	return dupstr;
}
