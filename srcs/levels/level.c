/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:34:22 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/07 23:00:02 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/level.h"

t_level	level_init(char *map_file)
{
	t_level	level;

	level.dimensions = level_dimensions_init(map_file);
	level.map = level_map_init(map_file, level.dimensions);
	return (level);
}

void	level_render(t_game game)
{
	int	x;
	int	y;

	y = 0;
	while (y < game.game_panel.level.dimensions.height)
	{
		x = 0;
		while (x < game.game_panel.level.dimensions.width)
		{
			if (game.game_panel.level.map[y][x] == '1')
				ft_printf("1");
			x++;
		}
		y++;
	}
}
