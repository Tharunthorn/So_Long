/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:34:22 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/10 22:14:37 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/level.h"

t_level	level_init(t_game game, char *map_file)
{
	t_level	level;

	level.dimensions = level_dimensions_init(map_file);
	level.map = level_map_init(map_file, level.dimensions);
	ft_printf("init level success\n");
	return (level);
}

void	level_render(t_game game)
{
	int	pos_x;
	int	pos_y;

	pos_y = 0;
	while (pos_y < game.game_panel.level.dimensions.height)
	{
		pos_x = 0;
		while (pos_x < game.game_panel.level.dimensions.width)
		{
			put_xpm_to_window(game, pos_x * PIXEL_WIDTH,
				pos_y * PIXEL_HEIGHT, "textures/tile_map/ground_tile.xpm");
			if (game.game_panel.level.map[pos_y][pos_x] == '1')
				put_xpm_to_window(game, pos_x * PIXEL_WIDTH,
					pos_y * PIXEL_HEIGHT, "textures/tile_map/tree_tile.xpm");
			else if (game.game_panel.level.map[pos_y][pos_x] == 'C')
				put_xpm_to_window(game, pos_x * PIXEL_WIDTH,
					pos_y * PIXEL_HEIGHT, "textures/item/item.xpm");
			else if (game.game_panel.level.map[pos_y][pos_x] == 'E')
				put_xpm_to_window(game, pos_x * PIXEL_WIDTH,
					pos_y * PIXEL_HEIGHT, "textures/tile_map/tree_tile.xpm");
			pos_x++;
		}
		pos_y++;
	}
}

void	level_update(t_game game)
{
	mlx_clear_window(game.game_window.mlx, game.game_window.win);
	level_render(game);
}

void	level_collect(t_game g, t_dimensions player_pos)
{
	t_dimensions	t_lt;
	t_dimensions	b_rt;
	t_dimensions	pos;

	t_lt.height = player_pos.height / PIXEL_HEIGHT;
	t_lt.width = player_pos.width / PIXEL_WIDTH;
	b_rt.height = (player_pos.height + PIXEL_HEIGHT - 1) / PIXEL_HEIGHT;
	b_rt.width = (player_pos.width + PIXEL_WIDTH - 1) / PIXEL_WIDTH;
	if (t_lt.height >= 0 && b_rt.height < g.game_panel.level.dimensions.height
		&& t_lt.width >= 0 && b_rt.width < g.game_panel.level.dimensions.width)
	{
		pos.height = t_lt.height;
		while (pos.height <= b_rt.height)
		{
			pos.width = t_lt.width;
			while (pos.width <= b_rt.width)
			{
				if (g.game_panel.level.map[pos.height][pos.width] == 'C')
					g.game_panel.level.map[pos.height][pos.width] = '0';
				pos.width++;
			}
			pos.height++;
		}
	}
}

void	level_exit(t_game game, t_dimensions player_pos)
{
	return ;
}
