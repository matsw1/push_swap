/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:15:47 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:38:22 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	result = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			result = (char *)(s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		result = (char *)(s + i);
	return (result);
}
