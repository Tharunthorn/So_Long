
#ifndef GAME_H
#define GAME_H


#include "gameWindow.h"
#include "gameMap.h"
#include "utility.h"

typedef struct {
    GameWindow  *gameWindow;
    GameMap     *gameMap;
} Game;

void initializeGame(Game *game, char *mapPath);

void gameStart(Game *game);

#endif