#include "libft.h"
#include <stdio.h>
int main()
{
        int n=9;
	size_t length_of_number;
        char buffer[100]={0};
        //char* stringint;
        length_of_number=0;
	size_t i=0;
        /*if(n<0)
        {
        //NEGATIVE INPUT
        }*/
        //stringint =malloc(length_of_number)
        //if(stringint==NULL)
        //      return NULL;
	if(n>0 && n<=9)
                printf("%c \n",n+'0');
        while(n>0)
        {
                length_of_number++; 
                while(i<length_of_number)
                {
                        *(buffer+i)=(n%10)+'0';
                        //printf(" i=%ld buffer[%ld]",i,i);
			//putchar(*(buffer+i));
			//putchar('\n');
                        i++;
                }
                n=n/10;
        }
	printf("length of number is %ld",length_of_number);
}
//char * itoa(int n)
//{
	
	
//}


