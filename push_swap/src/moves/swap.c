/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:00:15 by matemart          #+#    #+#             */
/*   Updated: 2024/06/02 19:44:02 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_stack *stack)
{
	int	temp_nb;
	int	temp_index;

	if (stack->size < 2)
		return ;
	temp_nb = stack->nb[0];
	temp_index = stack->index[0];
	stack->nb[0] = stack->nb[1];
	stack->index[0] = stack->index[1];
	stack->nb[1] = temp_nb;
	stack->index[1] = temp_index;
}

void	ft_sa(t_stacks *stacks)
{
	swap(&stacks->a);
	ft_printf("sa\n");
}

void	ft_sb(t_stacks *stacks)
{
	swap(&stacks->b);
	ft_printf("sb\n");
}

void	ft_ss(t_stacks *stacks)
{
	swap(&stacks->a);
	swap(&stacks->b);
	ft_printf("ss\n");
}
