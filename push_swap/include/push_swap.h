/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:27:43 by matemart          #+#    #+#             */
/*   Updated: 2024/03/18 01:24:07 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/include/libft.h"
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int	*nb;
	int	*index;
	int	size;
}				t_stack;

typedef struct s_stacks
{
	t_stack	a;
	t_stack	b;
}				t_stacks;

void	ft_free_error(char *message, t_stacks *stacks);
void	ft_free_exit(t_stacks *stacks);
void	ft_free_split(char **split_args, int count_args);

void	ft_sa(t_stacks *stacks);
void	ft_sb(t_stacks *stacks);
void	ft_ss(t_stacks *stacks);
void	ft_pa(t_stacks *stacks);
void	ft_pb(t_stacks *stacks);
void	ft_ra(t_stacks *stacks);
void	ft_rb(t_stacks *stacks);
void	ft_rr(t_stacks *stacks);
void	ft_rra(t_stacks *stacks);
void	ft_rrb(t_stacks *stacks);
void	ft_rrr(t_stacks *stacks);

void	ft_sort_three(t_stacks *stacks);
void	ft_sort_four(t_stacks *stacks);
void	ft_sort_five(t_stacks *stacks);
void	ft_sort_radix(t_stacks *stacks);

void	ft_update_index(t_stacks *stacks);
int		ft_index_min(int *numbers, int size);
void	ft_move_min_to_b(t_stacks *stacks);

int		ft_is_sorted(t_stacks *stacks);
int		ft_is_duplicate(int number, t_stack stack);
int		ft_is_number(char *str);
long	ft_atol(const char *str);

#endif
