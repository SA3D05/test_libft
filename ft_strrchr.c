/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:03:46 by satifi            #+#    #+#             */
/*   Updated: 2025/10/24 15:15:44 by satifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*temp;

	temp = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			temp = ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		temp = ((char *)&s[i]);
	return (temp);
}
