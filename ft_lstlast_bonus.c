/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:59:36 by satifi            #+#    #+#             */
/*   Updated: 2025/10/22 23:06:40 by satifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_lst;

	if (!lst)
		return (NULL);
	temp_lst = lst;
	while (temp_lst->next != NULL)
		temp_lst = temp_lst->next;
	return (temp_lst);
}
