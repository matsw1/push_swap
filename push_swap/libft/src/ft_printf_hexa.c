/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:43:59 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:27:00 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_printf_hexa(char var, va_list *arg)
{
	unsigned int	nb;
	int				count;

	nb = va_arg(*arg, unsigned int);
	count = ft_count_hexa(nb);
	ft_puthexa_fd(nb, var, 1);
	return (count);
}
