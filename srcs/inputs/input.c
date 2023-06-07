/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 01:39:33 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/08 02:07:23 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/input.h"

static int		g_is_up = 0;
static int		g_is_down = 0;
static int		g_is_left = 0;
static int		g_is_right = 0;

int	key_press_handler(int keycode, t_game_window game_window)
{
	if (keycode == KEY_ESC)
		exit(0);
	else if (keycode == KEY_W)
		g_is_up = 1;
	else if (keycode == KEY_A)
		g_is_left = 1;
	else if (keycode == KEY_S)
		g_is_down = 1;
	else if (keycode == KEY_D)
		g_is_right = 1;
	return (0);
}

int	key_release_handler(int keycode, t_game_window game_window)
{
	if (keycode == KEY_W)
		g_is_up = 0;
	else if (keycode == KEY_A)
		g_is_left = 0;
	else if (keycode == KEY_S)
		g_is_down = 0;
	else if (keycode == KEY_D)
		g_is_right = 0;
	return (0);
}
