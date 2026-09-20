/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:38:37 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/20 17:03:06 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen=0;
	size_t	slen=0;
	size_t	j;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	j=dlen;
	i=0;
	if (dlen >= size)
		return (size + slen);

	while(src[i] && (j+1)<size)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen+ slen);
}
