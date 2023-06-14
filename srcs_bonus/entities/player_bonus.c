/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:24:47 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/14 14:13:11 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/player_bonus.h"
#include "../includes/input_bonus.h"
#include "../includes/level_bonus.h"

t_player	player_init(t_level level)
{
	t_player	player;

	player.position = player_position_init(level);
	player.move_count = 0;
	player.direction = 0;
	player.speed = PLAYER_SPEED;
	return (player);
}

void	player_render_animation(t_game g, int frame, char *img_1, char *img_2)
{
	if (frame % 2 == 0)
		put_xpm_to_window(g,
			g.game_panel.player.position.width,
			g.game_panel.player.position.height,
			img_1);
	else
		put_xpm_to_window(g,
			g.game_panel.player.position.width,
			g.game_panel.player.position.height,
			img_2);
	return ;
}

void	player_render(t_game game)
{
	if (game.game_panel.player.direction == 0)
		player_render_animation(game, game.game_panel.player.move_count,
			"textures/link_sprite/link_back_1.xpm",
			"textures/link_sprite/link_back_2.xpm");
	if (game.game_panel.player.direction == 1)
		player_render_animation(game, game.game_panel.player.move_count,
			"textures/link_sprite/link_front_1.xpm",
			"textures/link_sprite/link_front_2.xpm");
	if (game.game_panel.player.direction == 2)
		player_render_animation(game, game.game_panel.player.move_count,
			"textures/link_sprite/link_left_1.xpm",
			"textures/link_sprite/link_left_2.xpm");
	if (game.game_panel.player.direction == 3)
		player_render_animation(game, game.game_panel.player.move_count,
			"textures/link_sprite/link_right_1.xpm",
			"textures/link_sprite/link_right_2.xpm");
	return ;
}

int	player_direction(t_game game)
{
	if (g_is_up)
		return (0);
	if (g_is_down)
		return (1);
	if (g_is_left)
		return (2);
	if (g_is_right)
		return (3);
	return (game.game_panel.player.direction);
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
