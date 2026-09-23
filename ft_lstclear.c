/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:20:45 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/23 15:41:04 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*newnode;

	if (!lst || !*lst || !del)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		newnode = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = newnode;
	}
	*lst = NULL;
}
