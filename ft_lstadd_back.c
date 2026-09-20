/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:19:33 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:19:35 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst,t_lst *new)
{
	t_list *tmp;

	if(!new || !lst)
		return ;
	if(!*lst)
	{
		*lst=new;
		return ;
	}
	tmp=ft_lstlast(*lst);
	tmp->next=new;
}
