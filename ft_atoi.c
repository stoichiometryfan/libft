/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:07:39 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/23 18:09:19 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *nptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr++ == '-')
			sign = -1;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (res > 2147483647 / 10 || (res == 2147483647 / 10 && (*(nptr)
					- '0') > 2147483647 % 10))
		{
			if (sign == 1)
				return (2147483647);
			return (-2147483648);
		}
		res = res * 10 + (*(nptr++) - '0');
	}
	return (sign * res);
}
