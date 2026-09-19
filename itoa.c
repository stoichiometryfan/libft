#include "libft.h"
#include <stdio.h>
char* reverse(char* string_to_rev,size_t len)
{
	size_t i=0;
	size_t length=len;
	string_to_rev=malloc(len+1);
	if(string_to_rev==NULL)
		return NULL;
	while(i<length)
	{
		char temp;
		temp=string_to_rev[i];
		string_to_rev[i]=string_to_rev[length];
		string_to_rev[length]=temp;
		length--;
		i++;
	}
	string_to_rev[i+1]='\0';
	return string_to_rev;
}
char *ft_itoa(int n)
{
	size_t length_of_number;
	size_t i;
	char *buffer;
	i = 0;
	length_of_number= 0;
	int is_neg = 0;

	if(n == 0)
	{
		char* str=malloc(2);
		if(str==NULL)
			return NULL;
		str[i++]='0';
		str[i]='\0';
		return str;
	}
	if(n<0)
	{
		is_neg=1;
		n=n*-1;
	}
	if(n > 0 && n <= 9)
	{
		char* str=malloc(2);
		if(str==NULL)
			return NULL;
		str[i++]=n+'0';
		str[i]='\0';
		return str;
	}
	if(n > 9)
	{
		while(n > 0)
        	{
			length_of_number++; 
			n = n / 10;
		}
		buffer=malloc(length_of_number);
		while(i < length_of_number)
		{
			*(buffer + i) = (n % 10) + '0';
			i++;
		}
		//char* readystr=reverse(buffer,length_of_number);
	}
	char* readystr=reverse(buffer,length_of_number);
	if(is_neg)
		return ft_strjoin("-",readystr);
	return reverse(buffer, length_of_number);
}

int main()
{
	printf("123456 as a string is %s ",ft_itoa(-9));
}
