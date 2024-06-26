/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:59:58 by matemart          #+#    #+#             */
/*   Updated: 2024/03/18 01:26:26 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_stack *stack)
{
	int	temp_nb;
	int	temp_index;
	int	i;

	if (stack->size < 2)
		return ;
	temp_nb = stack->nb[0];
	temp_index = stack->index[0];
	i = 0;
	while (i < stack->size)
	{
		stack->nb[i] = stack->nb[i + 1];
		stack->index[i] = stack->index[i + 1];
		i++;
	}
	stack->nb[stack->size - 1] = temp_nb;
	stack->index[stack->size - 1] = temp_index;
}

void	ft_ra(t_stacks *stacks)
{
	rotate(&stacks->a);
	ft_printf("ra\n");
}

void	ft_rb(t_stacks *stacks)
{
	rotate(&stacks->b);
	ft_printf("rb\n");
}

void	ft_rr(t_stacks *stacks)
{
	ft_ra(stacks);
	ft_rb(stacks);
	ft_printf("rr\n");
}
