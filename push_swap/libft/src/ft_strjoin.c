/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:07:37 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:35:34 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	news = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	if (news == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		news[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		news[i] = s2[j];
		i++;
		j++;
	}
	news[i] = '\0';
	return (news);
}
