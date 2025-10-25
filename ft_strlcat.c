/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:42 by satifi            #+#    #+#             */
/*   Updated: 2025/10/18 17:35:13 by satifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_i;
	size_t	dst_i;
	size_t	src_len;
	size_t	dst_len;

	src_len = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (src_len + size);
	dst_i = dst_len;
	src_i = 0;
	while (dst_i < size - 1 && src[src_i])
		dst[dst_i++] = src[src_i++];
	dst[dst_i] = '\0';
	return (src_len + dst_len);
}
