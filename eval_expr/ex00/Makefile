# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 13:02:34 by aschnapp          #+#    #+#              #
#    Updated: 2017/11/11 18:42:54 by aschnapp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = eval_expr
MAIN = ./main.c ./eval_expr.c
INC = ./header.h

.PHONY: all clean fclean re

all:
	gcc -Wall -Wextra -Werror -o $(TARGET) $(MAIN)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(TARGET)

re: fclean all