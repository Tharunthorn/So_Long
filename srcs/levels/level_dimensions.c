/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_dimensions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:00:32 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/07 17:46:37 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/level.h"

t_dimensions	level_dimensions_init(char *map_file)
{
	t_dimensions	dimensions;
	int				fd;
	char			ch;

	dimensions.width = 0;
	dimensions.height = 0;
	fd = open(map_file, O_RDONLY);
	if (fd == -1)
	{
		ft_printf("map_file: %s\n", map_file);
		ft_printf("Error: Could not open file.\n");
		exit(1);
	}
	while (read(fd, &ch, 1) == 1)
	{
		if (ch == '\n')
			dimensions.height++;
		else if (dimensions.height == 0)
			dimensions.width++;
	}
	close(fd);
	return (dimensions);
}

