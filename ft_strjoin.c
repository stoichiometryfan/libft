/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:36:47 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 18:20:41 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1_len;
	size_t	str2_len;
	size_t	new_str_len;
	char	*new_str;

	str1_len = ft_strlen(s1);
	str2_len = ft_strlen(s2);
	new_str_len = str1_len + str2_len;
	new_str = (char *)malloc(new_str_len + 1);
	if (!new_str)
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	ft_memcpy(new_str, s1, str1_len);
	ft_memcpy((new_str + str1_len), s2, str2_len);
	*(new_str + new_str_len) = '\0';
	return (new_str);
}
