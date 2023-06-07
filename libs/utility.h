#ifndef UTILITY_H
#define UTILITY_H

#include <fcntl.h>
#include "libft/libft.h"
#include "minilibx/mlx.h"
#include "constant.h"

typedef struct s_dimensions
{
	int	width;
	int	height;
} t_dimensions;

typedef struct s_level {
	char **map;
	t_dimensions dimensions;
} t_level;

typedef struct s_game_window {
	void	*mlx;
	void	*win;
} t_game_window;

typedef struct s_game_panel
{
	t_dimensions	dimensions;
	t_level			level;
} t_game_panel;
typedef struct s_game
{
	t_game_panel	game_panel;
	t_game_window	game_window;
}t_game;


#endif
