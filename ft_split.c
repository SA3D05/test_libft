/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:28:53 by satifi            #+#    #+#             */
/*   Updated: 2025/10/21 10:02:23 by satifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	splitter(char const *s, char c, size_t *i, char **result)
{
	char	*temp;
	size_t	len;
	size_t	w;
	size_t	start;

	start = *i;
	len = 0;
	w = 0;
	while (s[*i] != c && s[*i])
	{
		len++;
		(*i)++;
	}
	temp = malloc(len + 1);
	if (!temp)
		return (0);
	while (s[start] != c && s[start])
		temp[w++] = s[start++];
	temp[w] = '\0';
	*result = temp;
	return (1);
}

static size_t	count(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			counter++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (counter);
}

static void	*clear(size_t j, char **result)
{
	while (j > 0)
		free(result[--j]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	size_t			words;
	size_t			i;
	size_t			j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	words = count(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			if (!splitter(s, c, &i, &result[j++]))
				return (clear(j, result));
		}
	}
	result[j] = NULL;
	return (result);
}
