/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:10:06 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/08 13:23:40 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/game.h"
#include "../../libs/level.h"
#include "../../libs/input.h"

t_game	game_init(char *map_file)
{
	t_game	game;

	game.game_panel = game_panel_init(game, map_file);
	game.game_window = game_window_init(game.game_panel);
	return (game);
}

void	game_render(t_game game)
{
	level_render(game);
	return ;
}

void	game_update(t_game game)
{
	mlx_hook(game.game_window.win, ON_KEYDOWN, 0,
		key_press_handler, &game.game_window);
	mlx_hook(game.game_window.win, ON_KEYUP, 0,
		key_release_handler, &game.game_window);
	level_update(game);
	return ;
}

int	game_loop(t_game game)
{
	game_update(game);
	game_render(game);
	return (0);
}

void	game_run(t_game game)
{
	mlx_loop_hook(game.game_window.mlx, game_loop, &game);
	mlx_loop(game.game_window.mlx);
}
