/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielabdal <ielabdal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 18:29:16 by ielabdal          #+#    #+#             */
/*   Updated: 2026/09/21 16:36:41 by ielabdal         ###   ########.fr       */
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
char	*malloctokens(size_t char_count_token)
{
	return (char *)malloc(char_count_token + 1);
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
		if (*s)
		{
			len = chars_in_token(s, c);
			token_to_cpy[i] = malloctokens(len);
			if (!token_to_cpy[i])
			{
				free_func(token_to_cpy, i);
				return (0);
			}
			ft_strlcpy(token_to_cpy[i], s, len + 1);
			s += len;
			i++;
		}
	}
	return (1);
}
char	**ft_split(char const *s, char c)
{
	size_t	tokens;

	// 1)count the words or tokens in str
	// 2)allocate the memory
	// 3)cpy the token in the correcct position
	char **token_v; // argv
	if (s == NULL)
		return (NULL);
	tokens = 0;
	tokens = token_count(s, c);
	// malloc the space for all ptrs
	token_v = (char **)malloc((tokens + 1) * sizeof(char *));
	if (NULL == token_v)
		return (NULL);
	token_v[tokens] = NULL;
	// cpy all the strings in the correct position
	if (!fill(s, token_v, c))
		return (NULL);
	return (token_v);
}
