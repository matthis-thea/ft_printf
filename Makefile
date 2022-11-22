#VARIABLES
NAME = test

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = test.c ft_void_percent.c ft_string_letters.c ft_numbers_base_ten.c ft_numbers_base_sixteen.c ft_external_functions.c

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