/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:01:35 by matemart          #+#    #+#             */
/*   Updated: 2024/06/02 19:42:33 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_argv(int ac, char **av, t_stacks *s, int index)
{
	long	temp;

	s->a.size = 0;
	s->b.size = 0;
	s->a.nb = ft_calloc((ac - 1), sizeof(int));
	s->b.nb = ft_calloc((ac - 1), sizeof(int));
	s->a.index = ft_calloc((ac - 1), sizeof(int));
	s->b.index = ft_calloc((ac - 1), sizeof(int));
	if (!s->a.nb || !s->b.nb || !s->a.index || !s->b.index)
		ft_free_error("Error\n", s);
	while (++index < ac)
	{
		if (!ft_is_number(av[index]))
			return (ft_free_split(av, ac), (void)ft_free_error("Error\n", s));
		temp = ft_atol(av[index]);
		if (temp < INT_MIN || temp > INT_MAX)
			return (ft_free_split(av, ac), (void)ft_free_error("Error\n", s));
		if (ft_is_duplicate(temp, s->a))
			return (ft_free_split(av, ac), (void)ft_free_error("Error\n", s));
		s->a.index[s->a.size] = (int)temp;
		s->a.nb[s->a.size] = (int)temp;
		s->a.size++;
	}
}

void	clean_argv(char *args, t_stacks *stacks)
{
	char	**split_args;
	int		count_args;

	split_args = ft_split(args, ' ');
	if (!split_args)
		ft_free_error("Error\n", stacks);
	count_args = 0;
	while (split_args[count_args] != NULL)
		count_args++;
	check_argv(count_args, split_args, stacks, -1);
	ft_free_split(split_args, count_args);
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	stacks = ft_calloc(1, sizeof(t_stacks));
	if (!stacks)
		ft_free_error("Error\n", stacks);
	if (argc == 2)
		clean_argv(argv[1], stacks);
	else
		check_argv(argc, argv, stacks, 0);
	if (ft_is_sorted(stacks))
		ft_free_error("", stacks);
	if (stacks->a.size == 2 && stacks->a.nb[0] > stacks->a.nb[1])
		ft_sa(stacks);
	else if (stacks->a.size == 3)
		ft_sort_three(stacks);
	else if (stacks->a.size == 4)
		ft_sort_four(stacks);
	else if (stacks->a.size == 5)
		ft_sort_five(stacks);
	else
		ft_sort_radix(stacks);
	ft_free_exit(stacks);
	return (0);
}
