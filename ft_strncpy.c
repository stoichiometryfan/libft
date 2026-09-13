#include "libft.h"
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while(*src && n)
	{
		*(dest + i++) = *src++;
		--n;
	}
	if (n--)
		*(dest + i++) = '\0';
	return (dest);
}
