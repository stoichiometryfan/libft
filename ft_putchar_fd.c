#include "libft.h"
#include <stdio.h>
#include <stdio.h>

void ft_putchar_fd(char c,int fd)
{
	write(fd,&c,1);
}
int main()
{
	//EX file descriptors :stdout,stderr
	printf("hello world\n");
	fprintf(stderr,"hello  worlddt this is an error  \n");
	//fd is pipe that we give data and sends it 
	printf("fileno(stderr)=%i\n",fileno(stderr));
	//"w":write/overwrite if already exists
	//"a":append to whhatts already ther
	//"r":read from file 
	FILE* file=fopen("myfile.txt","w");
	fprintf(file,"some test tect to a file \n");
	write(fd,'c',1);
	printf("fileno(file)=%i",fileno(file));
	fclose(file);
}
