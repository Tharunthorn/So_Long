# Makefile

# Compiler
CC = cc

# Compiler flags
CFLAGS = -fsanitize=address -g

# Directories
LIBFT_DIR = lib/libFt
MINILIBX_DIR = lib/miniLibX

# Libraries
LIBFT = $(LIBFT_DIR)/libft.a
MINILIBX = $(MINILIBX_DIR)/libmlx.a

# Include paths
INCLUDES = -I$(LIBFT_DIR) -I$(MINILIBX_DIR)

# Source files
SRCS =	src/main/main.c src/main/game.c src/main/game_window.c src/main/game_panel.c \
		src/level/level.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable
TARGET = So_Long

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

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -C $(MINILIBX_DIR) clean
	@rm -f $(OBJS)

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@rm -f $(TARGET)

re: fclean all

.SUFFIXES: .c .o
