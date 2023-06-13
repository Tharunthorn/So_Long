/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:09:00 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/14 01:43:14 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_BONUS_H
# define PLAYER_BONUS_H

# include "utility_bonus.h"

typedef struct s_dimensions		t_dimensions;
typedef struct s_level			t_level;
typedef struct s_game			t_game;
typedef struct s_player			t_player;

t_player		player_init(t_level level);

t_dimensions	player_position_init(t_level level);

t_dimensions	player_update(t_game game);

int				player_direction(t_game game);

void			player_render(t_game game);

#endif
