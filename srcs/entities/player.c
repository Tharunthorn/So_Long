/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:24:47 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/11 22:14:07 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/player.h"
#include "../../libs/input.h"
#include "../../libs/level.h"

t_player	player_init(t_level level)
{
	t_player	player;

	player.position = player_position_init(level);
	player.move_count = 0;
	player.speed = 3;
	ft_printf("init player success\n");
	return (player);
}

void	player_render(t_game game)
{
	put_xpm_to_window(game,
		game.game_panel.player.position.width,
		game.game_panel.player.position.height,
		"textures/link_sprite/link_front_1.xpm");
	return ;
}

t_dimensions	player_update(t_game game)
{
	t_dimensions	new_position;

	new_position.height = game.game_panel.player.position.height;
	new_position.width = game.game_panel.player.position.width;
	if (g_is_up)
		new_position.height -= game.game_panel.player.speed;
	if (g_is_down)
		new_position.height += game.game_panel.player.speed;
	if (g_is_left)
		new_position.width -= game.game_panel.player.speed;
	if (g_is_right)
		new_position.width += game.game_panel.player.speed;
	if (colision_check(game, new_position, 'C'))
		level_collect(game, new_position);
	if (colision_check(game, new_position, 'E'))
		level_exit(game, new_position);
	if (!colision_check(game, new_position, '1'))
		return (new_position);
	return (game.game_panel.player.position);
}
