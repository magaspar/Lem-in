# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: magaspar <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/05/12 17:22:22 by magaspar     #+#   ##    ##    #+#        #
#    Updated: 2018/05/12 17:22:37 by magaspar    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = lem-in
INC = ./includes
LEMIN = main.c read_ants.c read_links.c sorting_next.c free.c utils.c\
		sorting.c algo.c algo_next.c dispatch_ants.c move_ants.c\
		parsing.c check_double.c
SRC = $(addprefix ./src/, $(LEMIN))
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	gcc -Wall -Wextra -Werror $(SRC) -L. libft/libftprintf.a -o $(NAME)

%.o : %.c
	gcc -Wall -Werror -Wextra -o $@ -c $< -I $(INC)

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
