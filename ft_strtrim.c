/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:31:55 by satifi            #+#    #+#             */
/*   Updated: 2025/10/24 19:43:10 by satifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set && s1)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	start = 0;
	i = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (s1[start] && is_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	result = malloc(len + 1);
	while (i < len)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
