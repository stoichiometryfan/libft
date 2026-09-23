/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:26:42 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/23 17:04:18 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_src_after_dest(unsigned const char *source,
		unsigned char *destination, size_t n)
{
	if (destination < source)
	{
		while (n)
		{
			*destination = *source;
			destination++;
			source++;
			n--;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	if (dest == NULL || src == NULL)
		return (NULL);
	s = (unsigned const char *)src;
	d = (unsigned char *)dest;
	if (dest == src || n == 0)
		return (dest);
	ft_src_after_dest(s, d, n);
	while (n)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	return (dest);
}
