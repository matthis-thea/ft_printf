#VARIABLES
NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror -g

SRC = SRC/ft_printf.c SRC/ft_void_percent.c SRC/ft_string_letters.c SRC/ft_numbers_base_ten.c SRC/ft_numbers_base_sixteen.c SRC/ft_external_functions.c

INC = INCLUDES/ft_printf.h

RM = rm -rf

OBJ = $(SRC:.c=.o) 

#-------------------------------
#INSTRUCTIONS
all : $(NAME)

$(NAME) : $(OBJ)
	 ar -crs $(NAME) $(OBJ) $(INC)
	
clean :
	$(RM) $(OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY :	all clean fclean re
