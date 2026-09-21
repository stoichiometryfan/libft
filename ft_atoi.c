/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:07:39 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 15:54:36 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *nptr)
{
	int	sign;
	int	res;
	int	big;
	int	min;
	int	digit;

	sign = 1;
	res = 0;
	big = 2147483647;
	min = -2147483648;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr != '\0')
	{
		if (*nptr >= '0' && *nptr <= '9')
		{
			digit = *(nptr) - '0';
			if (res > big / 10 || (res == big / 10 && digit > big % 10))
				return ((sign == 1) ? big : min);
			res = res * 10 + digit;
		}
		else
			break ;
		nptr++;
	}
	return (sign * res);
}
