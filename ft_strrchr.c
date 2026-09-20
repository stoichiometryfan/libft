/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 17:03:27 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/20 17:24:40 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	unsigned char ch=(unsigned char)c;
	size_t len=ft_strlen(s);

	while(len>0)
	{
		if(s[len]==ch)
			return (char*)(s+len);
		len--;
	}
	if(s[0]==ch)
		return (char*) (s);
	return NULL;
}
