/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:34:22 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/08 13:13:33 by tharunthorn      ###   ########.fr       */
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

void	level_put_xpm_to_window(t_game game, int pos_x, int pos_y, char *file)
{
	int		width;
	int		height;
	void	*image;

	width = 16;
	height = 16;
	image = mlx_xpm_file_to_image(game.game_window.mlx, file, &width, &height);
	if (image == NULL)
	{
		ft_printf("Error loading XPM image: %s\n", file);
		return ;
	}
	mlx_put_image_to_window(game.game_window.mlx, game.game_window.win, image,
		pos_x, pos_y);
	mlx_destroy_image(game.game_window.mlx, image);
	return ;
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
			level_put_xpm_to_window(game, pos_x * PIXEL_WIDTH,
				pos_y * PIXEL_HEIGHT, "textures/tile_map/ground_tile.xpm");
			if (game.game_panel.level.map[pos_y][pos_x] == '1')
				level_put_xpm_to_window(game, pos_x * PIXEL_WIDTH,
					pos_y * PIXEL_HEIGHT, "textures/tile_map/tree_tile.xpm");
			pos_x++;
		}
		pos_y++;
	}
}
