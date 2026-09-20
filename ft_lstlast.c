/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:24:20 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:24:47 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
	if(lst!)
		return NULL;
	while(lst != NULL && lst->next != NULL)
		lst->next;
	return lst;
}
