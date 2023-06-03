/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:58:20 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/03 12:44:44 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/game.h"

void	initialize_game(t_game *game, char *map_path)
{
	initialize_game_panel(game);
	initialize_game_window(game);
}

void	game_start(t_game *game)
{
	mlx_loop_hook(game_main->window->mlx, game_loop, &game);
	mlx_loop(game_main->window->mlx);
}
