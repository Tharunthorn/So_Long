/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_dimensions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:30:00 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/13 16:21:39 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/level.h"

int	get_line_length(int fd)
{
	int		line_length;
	char	ch;

	line_length = 0;
	while (read(fd, &ch, 1) == 1 && ch != '\n')
		line_length++;
	return (line_length);
}

t_dimensions	calculate_dimensions(int fd, int line_length)
{
	t_dimensions	dimensions;
	char			ch;
	int				current_length;

	current_length = 0;
	dimensions.width = line_length;
	dimensions.height = 0;
	while (read(fd, &ch, 1) == 1)
	{
		if (ch == '\n')
		{
			if (current_length != line_length)
			{
				ft_printf("Error: Map is not valid.\n");
				exit(1);
			}
			dimensions.height++;
			current_length = 0;
		}
		else
			current_length++;
	}
	return (dimensions);
}

t_dimensions	level_dimensions_init(char *map_file)
{
	t_dimensions	dimensions;
	int				fd;
	int				line_length;

	dimensions.width = 0;
	dimensions.height = 0;
	fd = open(map_file, O_RDONLY);
	if (fd == -1)
	{
		ft_printf("Error\n");
		exit(1);
	}
	line_length = get_line_length(fd);
	close(fd);
	fd = open(map_file, O_RDONLY);
	if (fd == -1)
	{
		ft_printf("Error\n");
		exit(1);
	}
	dimensions = calculate_dimensions(fd, line_length);
	close(fd);
	return (dimensions);
}
