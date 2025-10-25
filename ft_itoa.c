/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:37:03 by satifi            #+#    #+#             */
/*   Updated: 2025/10/18 17:46:40 by satifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	convert(long nbr, char *str, size_t *i)
{
	if (nbr > 0)
	{
		convert(nbr / 10, str, i);
		str[*i] = nbr % 10 + '0';
		*i += 1;
	}
}

static void	empty_str(char *str, size_t size)

{
	size_t	i;

	i = 0;
	while (i < size)
		str[i++] = '\0';
}

char	*ft_itoa(int n)
{
	int		sign;
	char	str[12];
	long	nbr;
	size_t	i;

	empty_str(str, 12);
	sign = 1;
	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		sign = -1;
		nbr *= -1;
	}
	if (sign == -1)
		str[i++] = '-';
	if (nbr == 0)
		str[i++] = '0';
	else
		convert(nbr, str, &i);
	str[i] = '\0';
	return (ft_strdup(str));
}
