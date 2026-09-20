/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:36:34 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:36:35 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_striteri (char* s,void (*f)(unsigned int,char*))
{
	size_t i;
	
	i=0;

	if(!s || !f)
		return ;
	while(s[i])
	{
		f(i,&s[i]);
		i++;
	}
	printf("%s",s);
}
void func(unsigned int  n, char * s)
{
	*s='a'+n;
}
int main(){
	//char str[]="hello";
	ft_striteri(NULL,&func);
	
}
