#ifndef LEVEL_H
#define LEVEL_H

#include "utility.h"

typedef struct s_dimensions t_dimensions;
typedef struct s_level t_level;
typedef struct s_game t_game;

t_level	level_init(char *map_file);

t_dimensions	level_dimensions_init(char *map_file);

char	**level_map_init(char *map_file, t_dimensions dimensions);

void	level_render(t_game game);

void	level_update(t_game game);

void	level_collect(t_game game, t_dimensions player_pos);

void	level_exit(t_game game, t_dimensions player_pos);

#endif
