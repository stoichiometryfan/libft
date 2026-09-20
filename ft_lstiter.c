/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:23:33 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:23:46 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void ft_lstiter(t_list *lst,void (*f)(void *))
{
	t_list *tmp=lst;

	while(tmp!=NULL)
	{
		t_list *newnode=tmp->next;
		tmp->content=f(content);
		tmp=newnode;
		
	}
}
