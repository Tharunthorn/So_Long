/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:07:28 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/06/14 01:00:09 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEVEL_H
# define LEVEL_H

# include "utility_bonus.h"

typedef struct s_dimensions	t_dimensions;
typedef struct s_level		t_level;
typedef struct s_game		t_game;

t_level			level_init(char *map_file);

t_dimensions	level_dimensions_init(char *map_file);

char			**level_map_init(char *map_file, t_dimensions dimensions);

void			level_render(t_game game);

void			level_update(t_game game);

void			level_collect(t_game game, t_dimensions player_pos);

void			level_exit(t_game game, t_dimensions player_pos);

int				is_map_valid(char **map, t_dimensions dimensions);

int				is_map_valid_player(char **map, t_dimensions dimensions);

int				is_map_valid_exit(char **map, t_dimensions dimensions);

int				is_map_valid_collect(char **map, t_dimensions dimensions);

int				is_map_valid_wall(char **map, t_dimensions dimensions);

#endif
