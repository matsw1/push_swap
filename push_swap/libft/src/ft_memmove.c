/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:30:05 by matemart          #+#    #+#             */
/*   Updated: 2024/02/20 23:59:09 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!(dst) && !(src))
		return (NULL);
	if (src > dst)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			((unsigned char *)dst)[len] = ((const unsigned char *)src)[len];
	}
	return (dst);
}
