# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 14:33:01 by pkettune          #+#    #+#              #
#    Updated: 2022/08/28 20:15:39 by pkettune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SCRS = ./srcs/*.c
INCLUDES = -c -I ./includes/
FLAGS = -Wall -Wextra -Werror 
OBJECTS = *.o
all: $(NAME)
$(NAME):
    gcc $(FLAGS) $(SCRS) $(INCLUDES)
    ar rc $(NAME) $(OBJECTS)
    ranlib $(NAME)
 
    
clean:
    rm -f *.o
fclean: clean
    rm -f $(NAME)
re: fclean all
.Phoney: clean fclean re