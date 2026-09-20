/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 15:04:35 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/20 15:04:38 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	//size_t i=0;
	char *substring=(char *)malloc((len+1)*sizeof(char));
	if(substring==NULL)
		return NULL;
	char *actsubstring=ft_memcpy(substring,(s+start),len);
	*(actsubstring+len+1)='\0';
	return actsubstring;
}
int main()
{
	char *string="";
	printf("  %s   ",ft_substr(string,0,2));
}
