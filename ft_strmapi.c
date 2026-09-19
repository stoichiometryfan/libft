#include <stdio.h>
#include "libft.h"
static char function(unsigned int n,char c)
{	
	return c + n;
}
char *ft_strmapi(char const *s,char (*f)(unsigned int,char))
{
	size_t i=0;
	f=&function;
	char* rtrn_string;
	rtrn_string=malloc(ft_strlen(s)+1);
	if(rtrn_string==NULL)
		return NULL;
	while(s[i]!='\0')
	{
		rtrn_string[i]=f(i,s[i]);
		i++;
	}
	return rtrn_string;
}
int main()
{
	printf("%s",ft_strmapi("123456",function));
}
