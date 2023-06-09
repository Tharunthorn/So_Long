/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_map_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:06:14 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/14 01:02:39 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/level_bonus.h"

int	file_type_check(char *map_file, char *file_type)
{
	char	*extension;

	extension = ft_strchr(map_file, '.');
	if (extension != NULL && ft_strncmp(extension, file_type,
			ft_strlen(file_type)) == 0)
		return (1);
	return (0);
}

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

char	**level_map_init(char *map_file, t_dimensions dimensions)
{
	char	**map;
	int		fd;

	map = (char **)malloc(sizeof(char *) * dimensions.height);
	if (!map)
	{
		ft_printf("Error: Could not allocate memory for map.\n");
		exit(1);
	}
	fd = open(map_file, O_RDONLY);
	if (fd == -1 || file_type_check(map_file, ".ber") == 0)
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
