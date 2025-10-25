/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:09:31 by satifi            #+#    #+#             */
/*   Updated: 2025/10/24 20:19:40 by satifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join_one(char const *s1, char const *s2)
{
	if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_l;
	size_t	s2_l;
	size_t	i;
	size_t	result_i;
	char	*result;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1 || !s2)
		return (join_one(s1, s2));
	i = 0;
	result_i = 0;
	s2_l = ft_strlen(s2);
	s1_l = ft_strlen(s1);
	result = malloc(s1_l + s2_l + 1);
	if (!result)
		return (NULL);
	while (s1[i])
		result[result_i++] = s1[i++];
	i = 0;
	while (s2[i])
		result[result_i++] = s2[i++];
	result[result_i] = '\0';
	return (result);
}
