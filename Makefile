# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeser <aeser@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 16:57:24 by aeser             #+#    #+#              #
#    Updated: 2022/01/08 16:57:25 by aeser            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= clang
CFLAGS	:= -Wall -Wextra -Werror -I. -c
FILES	:= $(shell find -name "*.c")
OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

grademe: re
	@../libftest/grademe.sh

.PHONY: all clean fclean grademe
