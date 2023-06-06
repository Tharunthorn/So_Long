/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:10:06 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/06 22:21:08 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/game.h"

t_game	game_init(void)
{
	t_game	game;

	game.game_panel = game_panel_init();
	game.game_window = game_window_init(game.game_panel);
	return (game);
}

void	game_update(t_game game)
{
	return ;
}

void	game_render(t_game game)
{
	return ;
}

int	game_loop(t_game game)
{
	return (0);
}

void	game_run(t_game game)
{
	mlx_loop_hook(game.game_window.mlx, game_loop, &game.game_window);
	mlx_loop(game.game_window.mlx);
}
