NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
PATH_HEADER = ./includes/

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

LINK = ar rc
INDEX = ranlib

all:		$(NAME)

.c.o:		$(CC) $(FLAGS) -I $(PATH_HEADER) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(LINK) $(NAME) $(OBJS)
			$(INDEX) $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

so:
			$(CC) -fPIC -c $(FLAGS) $(SRCS)
			gcc -shared -o libft.so $(OBJS)

.PHONY:		all clean fclean re
