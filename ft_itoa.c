/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:05:59 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 17:25:21 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			len;
	long long	temp;
	char		*str;
	long long	num;

	len = 0;
	temp = n;
	if (temp <= 0)
	{
		len++;
	}
	while (temp != 0)
	{
		len++;
		temp /= 10;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL); // Return NULL if memory allocation fails
	}
	str[len] = '\0';
	num = n;
	if (num < 0)
	{
		num = -num;
	}
	if (num == 0)
		str[--len] = '0';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
	{
		str[0] = '-';
	}
	return (str);
}
