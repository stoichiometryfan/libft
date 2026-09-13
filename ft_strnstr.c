#include <stddef.h>
#include "libft.h"
char *ft_strnstr(const char *big,const char *little,size_t len)
{
	size_t	i;
	size_t	j;

	i=0;
	j=0;
	if(!*little)
		return (char *)big;
	size_t little_len=0;
	while (little[little_len] != '\0')
		little_len++;
	if (len < little_len)
		return NULL;
	while(i <= (len-little_len))
	{
		if(big[i]=='\0')
			break;
		while(j<little_len && big[i+j]==little[j])
		{
			j++;
		}
		if(j==little_len)
			return (char *)(big+i);
	}
	return NULL;
}
