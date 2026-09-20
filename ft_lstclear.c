/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:20:45 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:21:49 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void ft_lstclear(t_list **lst,void (*del)(void*))
{
	if(!lst|| !*lst|| !del)
		return ;
	t_list *tmp=*lst;
	while(tmp!=NULL)
	{
		t_list *newnode=tmp->next;
		ft_lstdelone(tmp,del)
		tmp=newnode;
	}
}
