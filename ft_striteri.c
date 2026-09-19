#include <stdio.h>
#include "libft.h"
void ft_striteri (char* s,void (*f)(unsigned int,char*))
{
	size_t i;
	
	i=0;

	if(!s || !f)
		return ;
	while(s[i])
	{
		f(i,&s[i]);
		i++;
	}
	printf("%s",s);
}
void func(unsigned int  n, char * s)
{
	*s='a'+n;
}
int main(){
	//char str[]="hello";
	ft_striteri(NULL,&func);
	
}
