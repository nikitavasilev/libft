# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 22:25:35 by nvasilev          #+#    #+#              #
#    Updated: 2022/07/18 00:37:03 by nvasilev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME =				libft.a

CC =				cc
CFLAGS =			-Wall -Wextra -Werror -g3
RM =				rm -f

INCLUDES =			-I ./includes/
LINK =				ar rc
INDEX =				ranlib

SRCS =			 	$(addsuffix .c, $(SRCS_FILES))
BONUS_SRCS = 		$(addsuffix .c, $(BONUS_SRCS_FILES))

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS_FILES =		$(addprefix srcs/, \
					ft_atoi \
					ft_bzero \
					ft_calloc \
					ft_isalnum \
					ft_isalpha \
					ft_isascii \
					ft_isdigit \
					ft_isprint \
					ft_itoa \
					ft_memccpy \
					ft_memchr \
					ft_memcmp \
					ft_memcpy \
					ft_memmove \
					ft_memset \
					ft_putchar_fd \
					ft_putendl_fd \
					ft_putnbr_fd \
					ft_putstr_fd \
					ft_split \
					ft_strchr \
					ft_strdup \
					ft_striteri \
					ft_strjoin \
					ft_strlcat \
					ft_strlcpy \
					ft_strlen \
					ft_strmapi \
					ft_strncmp \
					ft_strnstr \
					ft_strrchr \
					ft_strtrim \
					ft_substr \
					ft_tolower \
					ft_toupper)

BONUS_SRCS_FILES =	$(addprefix bonus_srcs/, \
					ft_lstadd_back \
					ft_lstadd_front \
					ft_lstclear \
					ft_lstdelone \
					ft_lstiter \
					ft_lstlast \
					ft_lstmap \
					ft_lstnew \
					ft_lstsize)

################################################################################
#                                     OBJECTS                                  #
################################################################################

OBJS =				$(SRCS:%.c=%.o)
BONUS_OBJS =		$(BONUS_SRCS:%.c=%.o)

################################################################################
#                                     RULES                                    #
################################################################################

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	$(LINK) $(NAME) $(OBJS)
	$(INDEX) $(NAME)

prod:
	./production

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

bonus: $(BONUS_OBJS)
	$(LINK) $(NAME) $(BONUS_OBJS)
	$(INDEX) $(NAME)

re_bonus: fclean bonus

so:
	$(CC) -c -fPIC $(CFLAGS) $(SRCS) $(BONUS_SRCS)
	gcc -shared -o libft.so $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus so prod
