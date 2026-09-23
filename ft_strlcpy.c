/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:38:48 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 23:27:29 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t len;
	size_t i;

	len=ft_strlen(src);
	i=0;
	if(size==0)
		return len;
	while(i < len && i < size - 1)
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
	return len;
}
