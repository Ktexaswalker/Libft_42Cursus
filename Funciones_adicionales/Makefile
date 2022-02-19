#Archivos .c
SRC = 

OBJ = $(SRC:%.c=%.o) 

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

.c.o: ${CC} ${FLAGS} -I libft.h -c ${<:.c =.o}

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus