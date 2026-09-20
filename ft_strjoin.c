/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:36:47 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:36:48 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1,char const *s2)
{
	size_t str1_len=ft_strlen(s1);
	size_t str2_len=ft_strlen(s2);
	size_t new_str_len=str1_len+str2_len;
	char *new_str=(char *)malloc(new_str_len+1);
	ft_memcpy(new_str,s1,str1_len);
	ft_memcpy((new_str+str1_len),s2,str2_len);
	*(new_str+new_str_len+1)='\0';
	return new_str;
	
}
//#include <stdio.h>
/*int main()
{
	char const* str1="ibrahim";
	char const* str2=" ranoosh";
	printf("%s",ft_strjoin(str1,str2));
}*/
