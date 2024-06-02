/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:01:11 by matemart          #+#    #+#             */
/*   Updated: 2024/06/02 19:42:14 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(char *message)
{
	ft_putstr_fd(message, 2);
	exit(1);
}

void	ft_free_error(char *message, t_stacks *stacks)
{
	if (stacks)
	{
		if (stacks->a.nb)
			free(stacks->a.nb);
		if (stacks->a.index)
			free(stacks->a.index);
		if (stacks->b.nb)
			free(stacks->b.nb);
		if (stacks->b.index)
			free(stacks->b.index);
		free(stacks);
		stacks = NULL;
	}
	ft_error(message);
}

void	ft_free_exit(t_stacks *stacks)
{
	if (stacks)
	{
		if (stacks->a.nb)
			free(stacks->a.nb);
		if (stacks->a.index)
			free(stacks->a.index);
		if (stacks->b.nb)
			free(stacks->b.nb);
		if (stacks->b.index)
			free(stacks->b.index);
		free(stacks);
		stacks = NULL;
	}
}

void	ft_free_split(char **split_args, int count_args)
{
	while (count_args >= 0)
	{
		free(split_args[count_args]);
		count_args--;
	}
	free(split_args);
	split_args = NULL;
}
