#ifndef LEVEL_H
#define LEVEL_H

#include "utility.h"

typedef struct s_dimensions t_dimensions;

typedef struct s_level {
	char **map;
	t_dimensions dimensions;
} t_level;

t_level	level_init(char *map_file);

#endif
