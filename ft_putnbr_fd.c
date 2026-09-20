/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:27:01 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:27:06 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void ft_putnbr_fd(int n,int fd)
{
	if(n==-2147483648)
	{
		write(fd,"-2147483648",11);
		return;
	}
	if(n<0)
	{
		write(fd,"-",1);
		n=-n;
	}
	if(n>9)
		ft_putnbr_fd(int n,int fd);
	char digit=(n%10)+'0';
	write(fd,&digit,1)
}
