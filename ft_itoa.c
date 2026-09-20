/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:05:59 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/20 16:10:17 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char *ft_itoa(int n)
{
	int len = 0;
	long long temp = n;

	if (temp <= 0)
	{
		len++;
	}
	while (temp != 0)
	{
		len++;
		temp /= 10;
	}

	
	char* str = (char*)malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return NULL; // Return NULL if memory allocation fails
	}

	str[len] = '\0';
	long long num = n;
	if (num < 0)
	{
		num = -num;
	}
	if(num==0)
		str[--len]='0';
	while(num>0)
	{
		str[--len]=(num % 10) + '0';
		num/=10;
	}

	if (n < 0)
	{
 		str[0] = '-';
	}

	return str;
}
int main()
{
	int n=123456;
	printf("123456 as a string is %s ",ft_itoa(n));
}
