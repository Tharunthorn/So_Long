/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_panel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:40:19 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/06 21:56:00 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/game.h"


t_game_panel	game_panel_init(void)
{
	t_game_panel	game_panel;

	game_panel.dimensions.width = 800;
	game_panel.dimensions.height = 600;
	return (game_panel);
}
