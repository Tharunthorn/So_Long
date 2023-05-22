#include "../../lib/game.h"
#include "../../lib/gameWindow.h"

void initializeGame(Game *game, char *mapPath) {
    game->gameWindow = (GameWindow *)malloc(sizeof(GameWindow));
    game->gameMap = (GameMap *)malloc(sizeof(GameMap));
    initializeGameMap(game->gameMap, mapPath);
    initializeGameWindow(game->gameWindow, "So Long", game->gameMap->height, game->gameMap->width);
}

void gameStart(Game *game) {
    mlx_loop(game->gameWindow->mlx);
}