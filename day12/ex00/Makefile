TARGET = ft_display_file
MAIN = ./main.c
INC = ./header.h

.PHONY: all clean fclean re

all:
	gcc -Wall -Wextra -Werror -o $(TARGET) $(MAIN)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(TARGET)

re: fclean all