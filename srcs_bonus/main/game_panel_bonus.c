/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_panel_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:40:19 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/14 01:03:25 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_bonus.h"
#include "../includes/level_bonus.h"
#include "../includes/player_bonus.h"

t_game_panel	game_panel_init(char *map_file)
{
	t_game_panel	game_panel;

	game_panel.level = level_init(map_file);
	game_panel.dimensions = game_panel.level.dimensions;
	game_panel.player = player_init(game_panel.level);
	return (game_panel);
}
