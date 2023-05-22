#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "utility.h"


typedef struct {
    int width;
    int height;
    char **map;
} GameMap;

void initializeGameMap(GameMap *gameMap, char *mapPath);

#endif