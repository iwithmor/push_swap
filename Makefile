NAME_PS	= push_swap
NAME_CH = checker

SRC = algorithms.c new.c number_check.c operations.c reset.c special_cases.c stack.c
SRC_PS = push_swap.c
SRC_CH = checker.c

OBJ_PS = $(SRC_PS:.c=.o) $(SRC:.c=.o)
OBJ_CH = $(SRC_CH:.c=.o) $(SRC:.c=.o)

FLAGS	= -Wall -Wextra -Werror

#LIBFT	= ./libft/libft.a

all: libft $(NAME_PS) $(NAME_CH)

#libft: $(LIBFT)

#$(LIBFT):
#	make -C ./libft

$(NAME_CH): $(OBJ_CH) $(OBJ)
	cc $(FLAGS) -o $(NAME_CH) $(OBJ_CH)

$(NAME_PS): $(OBJ_PS)
	cc $(FLAGS) -o $(NAME_PS) $(OBJ_PS)

$(OBJ):
	cc $(FLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)
	make -C ./libft clean

fclean: clean
	rm -rf $(NAME_PS)
	rm -rf $(NAME_CH)
	make -C ./libft fclean

re: fclean all
Contact GitHub API Training Shop Blog About
© 2017 GitHub, Inc. Terms Privacy Security Status HelpMakefile