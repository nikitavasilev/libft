NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
PATH_HEADER = ./includes/

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

LINK = ar rc
INDEX = ranlib

all:	$(NAME)

.c.o:	$(CC) $(CFLAGS) -I $(PATH_HEADER) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	$(LINK) $(NAME) $(OBJS)
	$(INDEX) $(NAME)

prod:
	./production

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

so:
	$(CC) -shared -o libft.so $(OBJS)

.PHONY:	all clean fclean re so prod
