/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_panel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:40:19 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/11 11:03:45 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/game.h"
#include "../../libs/level.h"
#include "../../libs/player.h"

t_game_panel	game_panel_init(char *map_file)
{
	t_game_panel	game_panel;

	game_panel.level = level_init(map_file);
	game_panel.dimensions = game_panel.level.dimensions;
	game_panel.player = player_init(game_panel.level);
	ft_printf("init game_panel success\n");
	return (game_panel);
}
