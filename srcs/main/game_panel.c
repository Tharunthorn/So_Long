/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_panel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:40:19 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/07 23:56:00 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/game.h"
#include "../../libs/level.h"

t_game_panel	game_panel_init(t_game game, char *map_file)
{
	t_game_panel	game_panel;

	game_panel.level = level_init(game, map_file);
	game_panel.dimensions = game_panel.level.dimensions;
	return (game_panel);
}
