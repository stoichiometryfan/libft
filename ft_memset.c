/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:29:29 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/20 16:47:37 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;
	size_t i;

	str=s;
	i=0;

	while(i<n)
	{
		*(str+i)=(unsigned char)c;
		i++;
	}
	return s;

}
