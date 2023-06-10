/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:06:14 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/10 22:15:19 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/level.h"

void	map_read(int fd, char **map, t_dimensions dimensions)
{
	int		i;
	int		j;
	char	ch;

	i = 0;
	while (i < dimensions.height)
	{
		map[i] = (char *)malloc(sizeof(char) * dimensions.width);
		if (!map[i])
		{
			ft_printf("Error: Could not allocate memory for map.\n");
			exit(1);
		}
		j = 0;
		while (j < dimensions.width)
		{
			read(fd, &ch, 1);
			map[i][j] = ch;
			j++;
		}
		read(fd, &ch, 1);
		i++;
	}
}

int	is_map_valid(char **map, t_dimensions dimensions)
{
	return (1);
}

char	**level_map_init(char *map_file, t_dimensions dimensions)
{
	char	**map;
	char	ch;
	int		fd;

	map = (char **)malloc(sizeof(char *) * dimensions.height);
	if (!map)
	{
		ft_printf("Error: Could not allocate memory for map.\n");
		exit(1);
	}
	fd = open(map_file, O_RDONLY);
	if (fd == -1)
	{
		ft_printf("map_file: %s\n", map_file);
		ft_printf("Error: Could not open file.\n");
		exit(1);
	}
	map_read(fd, map, dimensions);
	close(fd);
	if (is_map_valid(map, dimensions) == 0)
	{
		ft_printf("Error: Map is not valid.\n");
		exit(1);
	}
	return (map);
}
