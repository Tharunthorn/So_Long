#include "../../lib/game.h"

int main(int argc, char **argv) {
    Game *game;

     if (argc < 2) {
        return 1;
    }

    game = (Game *)malloc(sizeof(Game));
    initializeGame(game, argv[1]);
    gameStart(game);
    
    free(game->gameWindow);
    free(game);
    
    return 0;
}
