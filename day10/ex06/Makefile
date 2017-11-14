# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 14:01:23 by aschnapp          #+#    #+#              #
#    Updated: 2017/11/06 21:48:44 by aschnapp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = do-op
MAIN = ./main.c

.PHONY: all clean fclean re

all:
	gcc -Wall -Wextra -Werror -o $(TARGET) $(MAIN)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(TARGET)

re: fclean all
