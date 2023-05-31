/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:58:20 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/05/31 10:48:35 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/game.h"

void	initialize_game(game *game_main, char *map_path)
{
	game_main->window = (game_window *)malloc(sizeof(game_window));
	game_main->map = (game_map *)malloc(sizeof(game_map));
	initialize_game_map(game_main->map, map_path);
	initialize_game_window(game_main->window, "So Long",
		game_main->map->height, game_main->map->width);
}

void	game_start(game *game_main)
{
	mlx_loop(game_main->window->mlx);
}
