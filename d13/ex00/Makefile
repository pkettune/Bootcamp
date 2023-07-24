# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 12:28:24 by pkettune          #+#    #+#              #
#    Updated: 2022/08/25 23:12:21 by pkettune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

.PHONY: clean fclean re all norm

all: $(NAME)

norm:
	norminette -R CheckForbiddenSourceHeader

$(NAME): norm
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)
#	ar -rc $(NAME) $(SRC)
	
clean:
	/bin/rm -rf *.o $(NAME)

fclean: clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf *.h.gch

re: fclean all
