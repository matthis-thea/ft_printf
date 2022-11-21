#VARIABLES
NAME = test

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = test.c ft_void_pourcentages.c ft_chaines_caracteres.c ft_nombres_base_dix.c ft_nombres_base_seize.c

INC = ft_printf.h

OBJ = $(SRC:.c=.o) 

#-------------------------------
#INSTRUCTIONS
all : $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ) 
	$(CC) $(CFLAGS) -o $@ $^

clean :
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY :	all clean fclean re