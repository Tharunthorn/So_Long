/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:00:40 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/14 00:59:59 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
# define INPUT_H

# include "utility_bonus.h"

typedef struct s_dimensions		t_dimensions;
typedef struct s_level			t_level;
typedef struct s_game_window	t_game_window;
typedef struct s_game_panel		t_game_panel;
typedef struct s_game			t_game;

extern int						g_is_up;
extern int						g_is_down;
extern int						g_is_left;
extern int						g_is_right;

enum
{
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

enum
{
	KEY_A = 0,
	KEY_S = 1,
	KEY_D = 2,
	KEY_W = 13,
	KEY_ESC = 53
};

int	key_press_handler(int keycode);

int	key_release_handler(int keycode);

#endif
