# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omfarij <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 12:44:13 by omfarij           #+#    #+#              #
#    Updated: 2022/08/30 17:24:34 by omfarij          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_print_solution.c ft_find_solution.c ft_verify_map.c ft_read_map.c ft_print.c ft_strlen.c ft_strcpy.c ft_get_chars.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	/bin/rm -f bsq.txt
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

run: fclean all grid
	./bsq bsq.txt
	/bin/rm -f *.o

grid:
	perl map/generate_m 26 9 3   > bsq.txt
