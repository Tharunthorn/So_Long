# Makefile

# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

# Directories
LIBFT_DIR = libs/libft
MINILIBX_DIR = libs/minilibx

# Libraries
LIBFT = $(LIBFT_DIR)/libft.a
MINILIBX = $(MINILIBX_DIR)/libmlx.a

# Include paths
INCLUDES = -I$(LIBFT_DIR) -I$(MINILIBX_DIR)

# Source files
SRCS =	srcs/main/main.c srcs/main/game.c srcs/main/game_window.c srcs/main/game_panel.c \
		srcs/levels/level.c srcs/levels/level_dimensions.c srcs/levels/level_map.c srcs/levels/level_map_valid.c \
		srcs/inputs/input.c \
		srcs/entities/player.c srcs/entities/player_position.c \
		srcs/utilities/utility.c

# Bonus source files
SRCS_BONUS = srcs_bonus/main/main_bonus.c srcs_bonus/main/game_bonus.c srcs_bonus/main/game_window_bonus.c srcs_bonus/main/game_panel_bonus.c \
			 srcs_bonus/levels/level_bonus.c srcs_bonus/levels/level_dimensions_bonus.c srcs_bonus/levels/level_map_bonus.c srcs_bonus/levels/level_map_valid_bonus.c \
			 srcs_bonus/inputs/input_bonus.c \
			 srcs_bonus/entities/player_bonus.c srcs_bonus/entities/player_position_bonus.c \
			 srcs_bonus/utilities/utility_bonus.c

# Object files
OBJS = $(SRCS:.c=.o)

# Bonus object files
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# Executable
TARGET = so_long

# Rule to build the executable
$(TARGET): $(OBJS) $(LIBFT) $(MINILIBX)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $(OBJS) $(LIBFT) -L$(MINILIBX_DIR) -lmlx -lm -framework OpenGL -framework AppKit

# Rule to compile source files
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Rule to build libft
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

# Rule to build miniLibX
$(MINILIBX):
	@$(MAKE) -C $(MINILIBX_DIR)

.PHONY: clean fclean re

bonus: $(OBJS_BONUS) $(LIBFT) $(MINILIBX)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(OBJS_BONUS) $(LIBFT) -L$(MINILIBX_DIR) -lmlx -lm -framework OpenGL -framework AppKit

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -C $(MINILIBX_DIR) clean
	@rm -f $(OBJS)
	@rm -f $(OBJS_BONUS)

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@rm -f $(TARGET)


re: fclean $(TARGET)

bonus_re: fclean bonus

.SUFFIXES: .c .o
