#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "utility.h"


typedef struct {
    int width;
    int height;
    char **map;
} game_map;

void initialize_game_map(game_map *map, char *map_path);

#endif
