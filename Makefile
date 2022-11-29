NAME 		= so_long
CFLAGS		= -Wall -Werror -Wextra
MLX			=  $(LIBS) lib/libmlx/libglfw3.a -framework Cocoa -framework OpenGL -framework IOKit
CC			= cc
FILES		= src/solong.c \
				src/print.c \
				src/errors.c \
				src/movement.c \
				src/init.c
OBJ = $(FILES:.c=.o)

INCLUDES = files/solong.h

LIBS =	lib/libmlx/libmlx42.a \
		lib/libft/libft.a \
		lib/getnextline/getnextline.a \
		lib/printf/libftprintf.a

LIBFT = lib/libft
GNL = lib/getnextline
PRINTF = lib/printf
MLXPATH = lib/libmlx

#RULES
all: $(NAME)

$(NAME): $(LIBS) $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLX)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

lib/libmlx/libmlx42.a:
	@$(MAKE) -C lib/libmlx/

lib/libft/libft.a:
	@$(MAKE) -C lib/libft/

lib/getnextline/getnextline.a:
	@$(MAKE) -C lib/getnextline/

lib/printf/libftprintf.a:
	@$(MAKE) -C lib/printf/
	
clean:
	rm -f src/*.o
	make fclean -C $(LIBFT)
	make fclean -C $(GNL)
	make fclean -C $(PRINTF)
	make fclean -C $(MLXPATH)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean re all
