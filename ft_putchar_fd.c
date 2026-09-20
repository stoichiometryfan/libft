/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:28:13 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:28:15 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
