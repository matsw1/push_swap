/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:03:07 by matemart          #+#    #+#             */
/*   Updated: 2024/06/02 19:43:01 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_is_sorted(t_stacks *stacks)
{
	int	i;

	i = 0;
	while (i < stacks->a.size - 1)
	{
		if (stacks->a.nb[i] > stacks->a.nb[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_duplicate(int number, t_stack stack)
{
	int	i;

	i = 0;
	while (i < stack.size)
	{
		if (stack.nb[i] == number)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atol(const char *str)
{
	int		i;
	int		neg;
	long	result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((long)result * neg);
}
