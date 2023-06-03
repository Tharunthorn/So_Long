
#ifndef GAME_H
#define GAME_H


#include "game_window.h"
#include "game_map.h"
#include "utility.h"

typedef struct s_game{
    t_game_window  *window;
	t_game_panel   *panel;
} t_game;

void initialize_game(t_game *game);

void game_start(t_game *game);

#endif
