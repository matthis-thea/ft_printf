#VARIABLES
NAME = test

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c SRC/ft_chaines_caracteres.c 

INC = INCLUDES/


#-------------------------------
#INSTRUCTIONS
all : $(NAME)
$(NAME) : $(OBJ) $(INC)
	$(CC) $(CFLAGS) $(SRC) -I $(INC) -o $(NAME)

exec :
	./test
clean :
	rm -rf $(NAME) ft_printf.o