#include "libft.h"
/*char *ft_itoa(int n)
{
	size_t length_of_number;
	char* buffer;
	char* stringint;
	length_of_number=0;

	if(n==0)
		return "0";

	/*if(n<0)
	{
	//NEGATIVE INPUT
	}*/
	//stringint =malloc(length_of_number)
	//if(stringint==NULL)
	//	return NULL;
	while(n/10!=0)
	{
		if(n/10!=0)
		{
			length_of_number++;
		}
		buffer[length_of_number];
		while(length_of_number)
		{
			*buffer=(n%10)+'0';
			printf("%c",*buffer);
			buffer++;
			length_of_number--;
		}
		n=n/10;
	}
	stringint =malloc(length_of_number+1)
	if(stringint==NULL)
		return NULL;
	/*while(length_of_number)
	{
		*stringint=
	}*/
}*/
int main()
{
	size_t length_of_number;
        char* buffer;
        char* stringint;
        length_of_number=0;

        if(n==0)
                return "0";

        /*if(n<0)
        {
        //NEGATIVE INPUT
        }*/
        //stringint =malloc(length_of_number)
        //if(stringint==NULL)
        //      return NULL;
        while(n/10!=0)
        {
                if(n/10!=0)
                {
                        length_of_number++;
                }
                buffer[length_of_number]='0';
                while(length_of_number)
                {
                        *buffer=(n%10)+'0';
                        printf("%c",*buffer);
                        buffer++;
                        length_of_number--;
                }
                n=n/10;
        }
        stringint =malloc(length_of_number+1)
        if(stringint==NULL)
                return NULL;
        /*while(length_of_number)
        {
                *stringint=
        }*/

}
