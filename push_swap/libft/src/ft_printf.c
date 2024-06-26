/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:42:32 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:08:19 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

static int	ft_convert(va_list *arg, char var)
{
	if (var == 'c')
		return (ft_printf_char(arg));
	if (var == 's')
		return (ft_printf_str(arg));
	if (var == 'p')
		return (ft_printf_pointer(arg));
	if (var == 'd' || var == 'i')
		return (ft_printf_number(arg));
	if (var == 'u')
		return (ft_printf_unsigned_number(arg));
	if (var == 'x' || var == 'X')
		return (ft_printf_hexa(var, arg));
	if (var == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		count;
	int		i;
	int		size;

	count = 0;
	i = -1;
	va_start(argptr, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			size = ft_convert(&argptr, str[++i]);
			if (size == -1)
				return (-1);
			count += size;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			++count;
		}
	}
	va_end(argptr);
	return (count);
}
