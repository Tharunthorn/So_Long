#include "../../lib/gameWindow.h"

void initializeGameWindow(GameWindow *gameWindow, char *name, int width, int height) {
    gameWindow->mlx = mlx_init();
    gameWindow->win = mlx_new_window(gameWindow->mlx, width, height, name);
}