/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:10:06 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/14 02:20:24 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_bonus.h"
#include "../includes/level_bonus.h"
#include "../includes/input_bonus.h"
#include "../includes/player_bonus.h"

t_game	game_init(char *map_file)
{
	t_game	game;

	game.game_panel = game_panel_init(map_file);
	game.game_window = game_window_init(game.game_panel);
	return (game);
}

void	game_update(t_game *game)
{
	level_update(*game);
	return ;
}

void	game_render(t_game *game)
{
	level_render(*game);
	player_render(*game);
	return ;
}

int	game_loop(t_game *game)
{
	mlx_hook(game->game_window.win, ON_KEYDOWN, 0, key_press_handler,
		&(game->game_window));
	mlx_hook(game->game_window.win, ON_KEYUP, 0, key_release_handler,
		&(game->game_window));
	game->game_panel.player.position = player_update(*game);
	game->game_panel.player.direction = player_direction(*game);
	game_update(game);
	game_render(game);
	if (g_is_up || g_is_down || g_is_left || g_is_right)
		game->game_panel.player.move_count++;
	mlx_string_put(game->game_window.mlx, game->game_window.win,
		0, (game->game_panel.dimensions.height + 1) * PIXEL_HEIGHT, 0x00FFFFFF,
		ft_itoa(game->game_panel.player.move_count));
	usleep(1000);
	return (0);
}

void	game_run(t_game *game)
{
	mlx_loop_hook(game->game_window.mlx, game_loop, game);
	mlx_loop(game->game_window.mlx);
	return ;
}
