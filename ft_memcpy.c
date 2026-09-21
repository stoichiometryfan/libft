/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:26:31 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 22:05:25 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dptr;
	const unsigned char	*sptr = (const unsigned char *)src;
	size_t				i;

	dptr = (unsigned char *)dest;
	if(n==0)
		return (dest);
	if (!dest || !src)
		return (NULL);
	i = 0;
	while (n)
	{
		*(dptr + i) = *(sptr + i);
		i++;
		n--;
	}
	return (dest);
}
