/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:41:15 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/23 17:07:29 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*rtrn_string;

	i = 0;
	if (!s || !f)
		return (NULL);
	rtrn_string = malloc(ft_strlen(s) + 1);
	if (rtrn_string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		rtrn_string[i] = f(i, s[i]);
		i++;
	}
	rtrn_string[i] = '\0';
	return (rtrn_string);
}
