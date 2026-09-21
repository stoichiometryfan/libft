/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:11:27 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 15:55:32 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			max_size;
	unsigned char	*nmembers_ptr;
	void			*fst_ptr;
	unsigned char	*last_mem_address;

	max_size = (size_t)-1;
	if (nmemb != 0 && size > max_size / nmemb)
	{
		return (NULL);
	}
	nmembers_ptr = (unsigned char *)malloc(size * nmemb);
	if (nmembers_ptr == NULL)
	{
		return (NULL);
	}
	fst_ptr = nmembers_ptr;
	last_mem_address = nmembers_ptr + (size * nmemb);
	while (nmembers_ptr < last_mem_address)
	{
		*nmembers_ptr = 0;
		nmembers_ptr++;
	}
	return (fst_ptr);
}
