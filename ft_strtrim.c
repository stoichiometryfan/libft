/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:00:51 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/20 15:01:03 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int is_set(char c,char const *set)
{
	int	i=0;

	while(set[i])
	{
		if(set[i]==c)
			return 1;
		i++;
	}
	return 0;
}
char* ft_strtrim(char const *s1,char const *set)
{
	size_t end;
	size_t start;
	if(!s1)
		return ft_strdup("");
	if(!set)
		return ft_strdup(s1);
	start=0;
	end=ft_strlen(s1);
	while(is_set(s1[start],set))
	{
	start++;
	}
	if(start==end)
		return ft_strdup("");
	while(is_set(s1[end-1],set))
		end--;
	return (ft_substr(s1,start,end-star));
}
