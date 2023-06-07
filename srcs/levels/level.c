/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:34:22 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/08 00:52:59 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/level.h"

t_level	level_init(t_game game, char *map_file)
{
	t_level	level;

	level.dimensions = level_dimensions_init(map_file);
	level.map = level_map_init(map_file, level.dimensions);
	return (level);
}

void	draw_square(t_game game, int x, int y, int pixel_size, int color)
{
	int pixel_x = x * pixel_size;
	int pixel_y = y * pixel_size;
	for (int i = 0; i < pixel_size; i++)
	{
		for (int j = 0; j < pixel_size; j++)
		{
			mlx_pixel_put(game.game_window.mlx, game.game_window.win, pixel_x + i, pixel_y + j, color);
		}
	}
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
			draw_square(game, x, y, 16, 0x00FCD8A8);
			if (game.game_panel.level.map[y][x] == '1')
				draw_square(game, x, y, 16, 0x0000A800);
			x++;
		}
		y++;
	}
}
