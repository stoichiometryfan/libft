/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:25:30 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:25:34 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
unsigned int ft_lstsize(t_list *lst)
{
	unsigned int counter=0;
	if(lst!)
		return 0;
	while(lst!=NULL)
	{
		lst->next;
		counter++;
	}
	return counter;
}
