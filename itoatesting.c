#include "libft.h"
#include <stdio.h>
int main()
{
        int n=1234;
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
        while(n/10!=0)
        {
                if(n/10!=0)
                {
                        length_of_number++;
                }
                
                while(i<length_of_number)
                {
                        *(buffer+i)=(n%10)+"0";
                        putchar(*buffer);
			putchar('\n');
                        i++;
                }
                n=n/10;
        }
}

