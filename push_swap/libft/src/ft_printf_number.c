/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:45:52 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:27:09 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_printf_number(va_list *arg)
{
	int	nb;
	int	count;

	nb = va_arg(*arg, int);
	count = ft_count_nbr(nb);
	ft_putnbr_fd(nb, 1);
	return (count);
}
