/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 13:00:34 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:25:03 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_element;
	t_list	*newlist;
	void	*new_content;

	tmp = lst;
	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (tmp != NULL)
	{
		new_content = f(tmp->content);
		new_element = ft_lstnew(new_content);
		if (new_element == NULL)
		{
			del(new_content);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, new_element);
		tmp = tmp->next;
	}
	return (newlist);
}
