# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeser <aeser@42kocaeli.com.tr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/08 16:57:24 by aeser             #+#    #+#              #
#    Updated: 2022/08/15 15:55:58 by aeser            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -I. -c

FILES	:= $(shell find . -type f -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
