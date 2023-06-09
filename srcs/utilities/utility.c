/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:27:25 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/09 23:33:22 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/utility.h"

void	put_xpm_to_window(t_game game, int pos_x, int pos_y, char *file)
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

int	colision_check(t_game game, t_dimensions new_position)
{
	t_dimensions	t_lt;
	t_dimensions	b_rt;
	t_dimensions	pos;

	t_lt.height = new_position.height / PIXEL_HEIGHT;
	t_lt.width = new_position.width / PIXEL_WIDTH;
	b_rt.height = (new_position.height + PIXEL_HEIGHT - 1) / PIXEL_HEIGHT;
	b_rt.width = (new_position.width + PIXEL_WIDTH - 1) / PIXEL_WIDTH;
	if (t_lt.height >= 0 && b_rt.height < game.game_panel.dimensions.height
		&& t_lt.width >= 0 && b_rt.width < game.game_panel.dimensions.width)
	{
		pos.height = t_lt.height;
		while (pos.height <= b_rt.height)
		{
			pos.width = t_lt.width;
			while (pos.width <= b_rt.width)
			{
				if (game.game_panel.level.map[pos.height][pos.width] == '1')
					return (1);
				pos.width++;
			}
			pos.height++;
		}
	}
	return (0);
}
