/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:26:20 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 22:41:30 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*str;

	ch = c;
	str = (const unsigned char *)ptr;
	while (n)
	{
		if (*str == ch)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}
