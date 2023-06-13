/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_panel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:40:19 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/13 15:31:04 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"
#include "../includes/level.h"
#include "../includes/player.h"

t_game_panel	game_panel_init(char *map_file)
{
	t_game_panel	game_panel;

	game_panel.level = level_init(map_file);
	game_panel.dimensions = game_panel.level.dimensions;
	game_panel.player = player_init(game_panel.level);
	return (game_panel);
}
