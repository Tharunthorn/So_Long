/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:40:23 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/06 23:51:58 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/game.h"

t_game_window	game_window_init(t_game_panel game_panel)
{
	t_game_window	game_window;

	game_window.mlx = mlx_init();
	game_window.win = mlx_new_window(game_window.mlx,
			game_panel.dimensions.width,
			game_panel.dimensions.height,
			"Game");
	return (game_window);
}
