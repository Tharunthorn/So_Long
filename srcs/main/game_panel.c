/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_panel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:40:19 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/06 23:51:53 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/game.h"

t_game_panel	game_panel_init(t_level level)
{
	t_game_panel	game_panel;

	game_panel.dimensions.width = level.dimensions.width * PIXEL_WIDTH;
	game_panel.dimensions.height = level.dimensions.height * PIXEL_HEIGHT;
	return (game_panel);
}
