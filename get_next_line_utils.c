/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muerdoga <muerdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:40:38 by muerdoga          #+#    #+#             */
/*   Updated: 2022/08/02 19:25:29 by muerdoga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *save)
{
	size_t	i;

	i = 0;
	if (!save)
		return (0);
	while (save[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *save, int c)
{
	int	i;

	i = 0;
	if (!save)
		return (NULL);
	if (c == '\0')
		return (&save[ft_strlen(save)]);
	while (save[i] != '\0')
	{
		if (save[i] == c)
			return (&save[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *save, char *buff)
{
	char	*new;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!save)
	{
		save = malloc(sizeof(char) * 1);
		save[0] = '\0';
	}
	if (!save || !buff)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(save) + ft_strlen(buff) + 1));
	if (!new)
		return (NULL);
	if (save)
		while (save[++i] != '\0')
			new[i] = save[i];
	while (buff[j] != '\0')
		new[i++] = buff[j++];
	new[i] = '\0';
	free(save);
	return (new);
}
