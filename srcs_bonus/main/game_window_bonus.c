/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:40:23 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/13 15:31:22 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"

t_game_window	game_window_init(t_game_panel game_panel)
{
	t_game_window	game_window;

	game_window.mlx = mlx_init();
	game_window.win = mlx_new_window(game_window.mlx,
			game_panel.dimensions.width * PIXEL_WIDTH,
			game_panel.dimensions.height * PIXEL_HEIGHT,
			"The Legend of ZoLong");
	return (game_window);
}
