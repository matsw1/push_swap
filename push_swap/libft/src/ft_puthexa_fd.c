/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:55:55 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:28:25 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	ft_puthexa_fd(unsigned long nb, char var, int fd)
{
	if (nb >= 16)
	{
		ft_puthexa_fd(nb / 16, var, fd);
		ft_puthexa_fd(nb % 16, var, fd);
	}
	else
	{
		if (nb <= 9)
		{
			ft_putchar_fd(nb + '0', fd);
		}
		else
		{
			if (var == 'x')
				ft_putchar_fd(nb % 10 + 'a', fd);
			if (var == 'X')
				ft_putchar_fd(nb % 10 + 'A', fd);
		}
	}
}
