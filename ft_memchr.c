/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:26:20 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/20 17:26:37 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *ptr,int c,size_t n)
{
	unsigned char ch;
	const unsigned char *str;

	ch=c;
	str=(const unsigned char *)ptr;
	while(n)
	{
		if(*str==ch)
			return (void *) ptr;
		//if(*ptr!=ch)
		//	return '\0';
		str++;
		n--;
	}
	return NULL;
}
#include <stdio.h>
int main()
{
	char data[]={'t','j','h','g','f','d','a'};
	printf("%p",ft_memchr(data,'z',5));
}
