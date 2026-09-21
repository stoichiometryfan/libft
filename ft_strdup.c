/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:24:23 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/20 16:24:26 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dupstr;
	size_t	sizofdup;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	sizofdup = (i + 1);
	dupstr = (char *)malloc(sizofdup);
	if (dupstr == NULL)
		return (NULL);
	ft_memcpy(dupstr, s, sizofdup);
	return (dupstr);
}
