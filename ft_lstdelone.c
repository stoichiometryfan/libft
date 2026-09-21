/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:23:19 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 16:10:58 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	void	*con;

	if (!lst || del == NULL)
		return ;
	con = lst->content;
	del(con);
	free(lst);
}
