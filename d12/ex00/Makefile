# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 19:40:43 by pkettune          #+#    #+#              #
#    Updated: 2022/08/25 22:53:23 by pkettune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c

.PHONY: clean fclean all

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)
	
clean:
	/bin/rm -rf *.o $(NAME)

fclean: clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf *.h.gch
