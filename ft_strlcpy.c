#include "libft.h"
unsigned int	ft_strlcpy(char *dest,const char *src, unsigned int size)
{
	int	len;

	len = 0;
	while(*(src + len) && --size)
		*dest++ = *(src + len++);
	*dest = '\0';
	while(*(src+len))
		++len;
	return (len);
}
