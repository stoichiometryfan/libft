/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:25:16 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/19 18:25:19 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
t_list *ft_lstnew(void * content)
{
	t_list *newnode=(t_list *)malloc(sizeof(t_list));
	if*(newnode==NULL)
		return NULL;
	newnode->content=content;
	newnode->next=NULL;
	return newnode;
}
