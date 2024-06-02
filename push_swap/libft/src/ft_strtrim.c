/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:17:21 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:38:32 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && s1[j - 1] && ft_strchr(set, s1[j - 1]))
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str != NULL)
		ft_strlcpy(str, &s1[i], (j - i + 1));
	return (str);
}
