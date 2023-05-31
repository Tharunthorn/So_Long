
#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "utility.h"

typedef struct {
    void    *mlx;
    void	*win;
} game_window;

void initialize_game_window(game_window *window, char *name, int width, int height);

#endif
