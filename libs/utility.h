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

typedef struct s_player {
	t_dimensions	position;;
	int				move_count;
	int				speed;
} t_player;
typedef struct s_game_window {
	void	*mlx;
	void	*win;
} t_game_window;

typedef struct s_game_panel
{
	t_dimensions	dimensions;
	t_level			level;
	t_player		player;
} t_game_panel;
typedef struct s_game
{
	t_game_panel	game_panel;
	t_game_window	game_window;
}t_game;

void	put_xpm_to_window(t_game game, int pos_x, int pos_y, char *file);

int		colision_check(t_game game, t_dimensions new_position, char type);

int		is_exitable(t_game game, t_dimensions pos);

int		is_all_collect(t_game game);

void	tile_render(t_game game, int pos_x, int pos_y);

#endif
