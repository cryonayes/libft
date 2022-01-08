NAME	:= libft.a
CC		:= clang
CFLAGS	:= -Wall -Wextra -Werror -I. -c
FILES	:= $(shell find -name "*.c")
OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES) -o $(@:%.c=%.o)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

grademe:

.PHONY: all clean fclean grademe
