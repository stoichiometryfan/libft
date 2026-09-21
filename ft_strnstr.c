/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:00:27 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 18:06:40 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	little_len = 0;
	while (little[little_len] != '\0')
		little_len++;
	if (len < little_len)
		return (NULL);
	while (i <= (len - little_len))
	{
		if (big[i] == '\0')
			break ;
		j = 0;
		while (j < little_len && big[i + j] == little[j])
		{
			j++;
		}
		if (j == little_len)
			return (char *)(big + i);
		i++;
	}
	return (NULL);
}
