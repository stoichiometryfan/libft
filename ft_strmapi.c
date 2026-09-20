/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:41:15 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:43:05 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static char function(unsigned int n,char c)
{	
	return c + n;
}
char *ft_strmapi(char const *s,char (*f)(unsigned int,char))
{
	size_t i=0;
	f=&function;
	char* rtrn_string;
	if (!s || !f)
		return (NULL);
	rtrn_string=malloc(ft_strlen(s)+1);
	if(rtrn_string==NULL)
		return NULL;
	while(s[i]!='\0')
	{
		rtrn_string[i]=f(i,s[i]);
		i++;
	}
	rtrn_string[i]='\0';
	return rtrn_string;
}
