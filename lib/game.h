
#ifndef GAME_H
#define GAME_H


#include "game_window.h"
#include "game_map.h"
#include "utility.h"

typedef struct {
    game_window  *window;
    game_map     *map;
} game;

void initialize_game(game *game_main, char *map_path);

void game_start(game *game_main);

#endif
