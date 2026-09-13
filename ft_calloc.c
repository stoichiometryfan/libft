#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
void *ft_calloc(size_t nmemb,size_t size)
{
	size_t max_size;
	max_size = (size_t) - 1;

	if(nmemb != 0 && size>max_size/nmemb)
	{
		return NULL;
	}
	unsigned char *nmembers_ptr=(unsigned char *)malloc(size*nmemb);
	if(nmembers_ptr==NULL)
	{
		return NULL;
	}
	void *fst_ptr=nmembers_ptr;

	unsigned char *last_mem_address=nmembers_ptr+(size*nmemb);
	while(nmembers_ptr<last_mem_address)
	{
		*nmembers_ptr=0;// REMOVE THE WHILE LOOP AND USE MEMSET OR BZERO FUNCS 
		nmembers_ptr++;
	}
	return fst_ptr;
}
int main()
{
	int number=0;
	printf("enter the number of players: ");
	scanf("%d",&number);
	int *scores=ft_calloc(number,sizeof(int));
	if(scores==NULL)
	{
		printf("mem allo failed ");
		return 1;
	}
	for(int i=0;i<number;i++)
        {
                printf("%d ",scores[i]);
        }

	for(int i=0;i<number;i++)
        {
                printf("enter score#%d: ",i+1);
		scanf("%d",&scores[i]);
        }

	for(int i=0;i<number;i++)
	{
		printf("%d ",scores[i]);
	}
	free(scores);
	scores=NULL;
	
}
