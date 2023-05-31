/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:02:11 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/05/31 10:41:32 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/game_window.h"

void	initialize_game_window(game_window *window, char *name,
		int width, int height)
{
	window->mlx = mlx_init();
	window->win = mlx_new_window(window->mlx, width, height, name);
}
