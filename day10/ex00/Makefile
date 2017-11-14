# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschnapp <aschnapp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 14:01:23 by aschnapp          #+#    #+#              #
#    Updated: 2017/11/06 18:35:50 by aschnapp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
CC = /user/bin/gcc
SRC = srcs/
INC = includes/
FUNC = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
DOTOS = $(patsubst %, %.o, $(FUNC))

.PHONY: all clean fclean re

all: $(TARGET)

$(DOTOS):
	gcc -Wall -Wextra -Werror -I $(INC) -c $(patsubst %.o, $(SRC)%.c, $@)

$(TARGET): $(DOTOS)
	ar rc $(TARGET) $(DOTOS)
	ranlib $(TARGET)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(TARGET)

re: fclean all
