/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:29:16 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/23 16:21:14 by ielabdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	token_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

size_t	chars_in_token(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}

static void	free_func(char **token_to_cpy, size_t allocated_count)
{
	while (allocated_count > 0)
	{
		allocated_count--;
		free(token_to_cpy[allocated_count]);
	}
	free(token_to_cpy);
}

int	fill(char const *s, char **token_to_cpy, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		len = chars_in_token(s, c);
		token_to_cpy[i] = (char *)malloc(len + 1);
		if (!token_to_cpy[i])
		{
			free_func(token_to_cpy, i);
			return (0);
		}
		ft_strlcpy(token_to_cpy[i], s, len + 1);
		s += len;
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens;
	char	**token_v;

	if (s == NULL)
		return (NULL);
	tokens = 0;
	tokens = token_count(s, c);
	token_v = (char **)malloc((tokens + 1) * sizeof(char *));
	if (NULL == token_v)
		return (NULL);
	token_v[tokens] = NULL;
	if (!fill(s, token_v, c))
		return (NULL);
	return (token_v);
}
