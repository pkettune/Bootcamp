# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkettune <pkettune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 16:33:59 by pkettune          #+#    #+#              #
#    Updated: 2022/09/01 14:31:38 by pkettune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
CC = gcc
CFLAGS = -I$(IDIR)
IDIR = ../include
ODIR = obj
LDIR = ../lib

LIBS= -lm

_DEPS = file.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = file.o file2.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

.PHONY: clean fclean re all

all: $(NAME)

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

allez: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ 

fclean:	clean
	/bin/rm -f *.o

re: fclean all
