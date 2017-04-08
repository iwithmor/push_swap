NAME_PS	= push_swap
NAME_CH = checker

SRC = algorithms.c new.c number_check.c operations.c \
reset.c special_cases.c stack.c push_swap.c checker.c \
libft.c

SRC_PS = main_ps.c
SRC_CH = main_ch.c

OBJ = $(SRC:.c=.o)
OBJ_PS = $(SRC_PS:.c=.o)
OBJ_CH = $(SRC_CH:.c=.o)

FLAGS = -Wall -Wextra -Werror

#LIBFT	= ./libft/libft.a

all: $(NAME_PS) $(NAME_CH)

#libft: $(LIBFT)

#$(LIBFT):
#	make -C ./libft

$(NAME_CH): $(OBJ_CH) $(OBJ)
	cc $(FLAGS) -o $(NAME_CH) $(OBJ_CH) $(OBJ)

$(NAME_PS): $(OBJ_PS) $(OBJ)
	cc $(FLAGS) -o $(NAME_PS) $(OBJ_PS) $(OBJ)

$(OBJ):
	cc $(FLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ) $(OBJ_PS) $(OBJ_CH)
#	make -C ./libft clean

fclean: clean
	rm -rf $(NAME_PS)
	rm -rf $(NAME_CH)
#	make -C ./libft fclean

re: fclean all
