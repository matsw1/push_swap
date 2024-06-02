/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_number.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:48:58 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:27:29 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_printf_unsigned_number(va_list *arg)
{
	unsigned int	nb;
	int				count;

	nb = va_arg(*arg, unsigned int);
	count = ft_count_nbr_unsigned(nb);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, 1);
		ft_putnbr_fd(nb % 10, 1);
	}
	else
		ft_putchar_fd(nb + '0', 1);
	return (count);
}
