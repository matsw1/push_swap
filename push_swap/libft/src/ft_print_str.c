/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:48:35 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:28:01 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_printf_str(va_list *arg)
{
	char	*str;
	int		i;

	str = va_arg(*arg, char *);
	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}
