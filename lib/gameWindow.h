
#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "utility.h"

typedef struct {
    void    *mlx;
    void	*win;
} GameWindow;

void initializeGameWindow(GameWindow *gameWindow, char *name, int width, int height);

#endif