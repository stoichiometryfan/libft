#include "libft.h"
#include <stddef.h>
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen=0;
	size_t	slen=0;
	size_t	tofill=0;

	i = 0;
	dlen = ft_strlen((const char*)dlen);
	slen = ft_strlen((const char*)slen);
	if (dlen >= size)
		return (size + slen);
	tofill = size - dlen - 1;
	while(src[i] && tofill--)
	{
		dst[dlen +i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen+ slen);
}
