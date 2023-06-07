#ifndef GAME_H
# define GAME_H

#include "utility.h"

typedef struct s_dimensions t_dimensions;
typedef struct s_level t_level;
typedef struct s_game_window t_game_window;
typedef struct s_game_panel t_game_panel;
typedef struct s_game t_game;

t_game	game_init(char *map_file);

t_game_panel	game_panel_init(t_game game, char *map_file);

t_game_window	game_window_init(t_game_panel game_panel);

int		game_loop(t_game game);

void	game_update(t_game game);

void	game_render(t_game game);

void	game_run(t_game game);


#endif
