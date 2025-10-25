/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:26:52 by satifi            #+#    #+#             */
/*   Updated: 2025/10/24 20:09:41 by satifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	trim_first(const char *str, int *i, int *sign)
{
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' ')
		(*i)++;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign = -1;
		(*i)++;
	}
}

int	ft_atoi(const char *str)
{
	int					sign;
	int					i;
	unsigned long		result;
	unsigned long		prev;

	i = 0;
	result = 0;
	sign = 1;
	trim_first(str, &i, &sign);
	while (ft_isdigit(str[i]))
	{
		prev = result;
		result = result * 10 + (str[i] - '0');
		if (prev != result / 10)
		{
			if (sign > 0)
				return (-1);
			return (0);
		}
		i++;
	}
	return ((int)(result * sign));
}
