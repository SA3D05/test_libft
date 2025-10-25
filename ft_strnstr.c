/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:48:44 by satifi            #+#    #+#             */
/*   Updated: 2025/10/23 17:41:06 by satifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_i;

	if (*little == '\0')
		return ((char *)big);
	big_i = 0;
	while (big_i < len && big[big_i])
	{
		little_i = 0;
		while (little[little_i]
			&& (big_i + little_i) < len
			&& big[big_i + little_i]
			&& big[big_i + little_i] == little[little_i])
			little_i++;
		if (little[little_i] == '\0')
			return ((char *)&big[big_i]);
		big_i++;
	}
	return (NULL);
}
