/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:07:32 by thmusik           #+#    #+#             */
/*   Updated: 2023/05/23 00:10:45 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/utility.h"



char	*get_string(int fd, char *string)
{
	char	*buffer;
	int		read_bytes;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(string, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		string = ft_strjoin(string, buffer);
	}
	free(buffer);
	return (string);
}

char	*get_line(char *string)
{
	char	*line;
	int		index;

	index = 0;
	if (!*(string + index))
		return (NULL);
	while (*(string + index) && *(string + index) != '\n')
		index++;
	line = (char *)malloc(sizeof(char) * (index + 2));
	if (!line)
		return (NULL);
	index = 0;
	while (*(string + index) && *(string + index) != '\n')
	{
		*(line + index) = *(string + index);
		index++;
	}
	if (*(string + index) == '\n')
	{
		*(line + index) = *(string + index);
		index++;
	}
	*(line + index) = '\0';
	return (line);
}

char	*get_next(char *string)
{
	char	*next;
	int		index1;
	int		index2;

	index1 = 0;
	while (*(string + index1) && *(string + index1) != '\n')
		index1++;
	if (!*(string + index1))
	{
		free(string);
		return (NULL);
	}
	next = (char *)malloc(sizeof(char) * (ft_strlen(string) - index1 + 1));
	if (!next)
		return (NULL);
	index1++;
	index2 = 0;
	while (*(string + index1))
		*(next + index2++) = *(string + index1++);
	*(next + index2) = '\0';
	free(string);
	return (next);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*string;

	if (fd >= 0 && BUFFER_SIZE > 0)
	{
		string = get_string(fd, string);
		if (!string)
			return (NULL);
		line = get_line(string);
		string = get_next(string);
		return (line);
	}
	return (NULL);
}
