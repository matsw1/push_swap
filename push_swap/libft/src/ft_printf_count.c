/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:43:31 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:26:50 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_count_nbr(int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int	ft_count_nbr_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb <= 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int	ft_count_hexa(unsigned long nb)
{
	int	count;

	if (nb == 0)
		return (1);
	count = 0;
	while (nb)
	{
		nb = nb / 16;
		count++;
	}
	return (count);
}
