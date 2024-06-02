/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:52:30 by matemart          #+#    #+#             */
/*   Updated: 2024/02/20 23:32:39 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;
	size_t	s;

	s = (count * size);
	b = malloc(count * size);
	if (b != NULL)
	{
		ft_bzero(b, s);
		return (b);
	}
	else
		return (0);
}
