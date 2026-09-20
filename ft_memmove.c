/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:26:42 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:26:44 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *memmove(void *dest, const void *src, size_t n)
{
	if(dest==NULL || src == NULL)
		return NULL;
	unsigned const char *s=(unsigned const char*)src;
	unsigned char *d=(unsigned char *)dest;
	if(dest==src || n==0)
		return dest;
	if(d<s)
	{
		while(n)
		{
			*d=*s;
			d++;
			s++;
			n--;
		}
	}
	else if(s<d)
	{
		while(n)
		{
			d[n-1]=s[n-1];
			n--;
		}
	}
	return dest;
}
