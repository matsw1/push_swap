/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:46:22 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:27:18 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_printf_pointer(va_list *arg)
{
	unsigned long	nb;
	int				count;

	nb = va_arg(*arg, unsigned long);
	count = ft_count_hexa(nb);
	ft_putstr_fd("0x", 1);
	ft_puthexa_fd(nb, 'x', 1);
	return (count + 2);
}
