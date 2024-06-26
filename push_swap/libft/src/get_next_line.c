/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matemart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:19:26 by matemart          #+#    #+#             */
/*   Updated: 2024/02/21 00:39:18 by matemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*remain_line(char *stash)
{
	char	*remaining;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!stash)
		return (NULL);
	j = ft_strlen(stash);
	while (stash[i] != '\n' && stash[i])
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	remaining = ft_calloc(j - i + 1, sizeof(char));
	if (!remaining)
		return (NULL);
	i++;
	j = 0;
	while (stash[i])
		remaining[j++] = stash[i++];
	free(stash);
	return (remaining);
}

char	*extract_line(char *stash)
{
	char	*line;
	int		i;
	int		j;

	if (!stash[0])
		return (NULL);
	i = 0;
	j = 0;
	while (stash[i] != '\n' && stash[i])
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	while (stash[j] != '\n' && stash[j])
	{
		line[j] = stash[j];
		j++;
	}
	if (stash[j] == '\n' && stash[j])
	{
		line[j] = '\n';
		j++;
	}
	return (line);
}

char	*add_to_stash(char *stash, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(stash, buffer);
	free(stash);
	return (temp);
}

static char	*read_file(char *stash, int fd)
{
	int			nbytes;
	char		*buffer;

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	nbytes = 1;
	while (!ft_strrchr(buffer, '\n') && nbytes > 0)
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		if (nbytes < 0)
		{
			free(buffer);
			free(stash);
			return (NULL);
		}
		buffer[nbytes] = '\0';
		stash = add_to_stash(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE < 1 \
	|| BUFFER_SIZE > INT_MAX)
		return (NULL);
	if (!stash)
		stash = ft_calloc(1, sizeof(char));
	stash = read_file(stash, fd);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = remain_line(stash);
	return (line);
}
