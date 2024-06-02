/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:17:55 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:38:41 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		new_str = ft_calloc(1, sizeof(char));
		if (!new_str)
			return (NULL);
	}
	else
	{
		new_len = ft_strlen(s + start);
		if (!(new_len < len))
			new_len = len;
		new_str = (char *)malloc((new_len + 1) * sizeof(char));
		if (!new_str)
			return (NULL);
		new_str[new_len] = 0;
		while (new_len-- > 0)
			new_str[new_len] = s[start + new_len];
	}
	return (new_str);
}
