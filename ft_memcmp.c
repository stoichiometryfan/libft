/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 17:27:23 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 17:26:35 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*st1 = (const unsigned char *)s1;
	const unsigned char	*st2 = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && st1[i] == st2[i])
		i++;
	return ((unsigned char)st1[i] - (unsigned char)st2[i]);
}
