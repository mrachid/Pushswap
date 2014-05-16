# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrachid <mrachid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/29 12:51:34 by mrachid           #+#    #+#              #
#    Updated: 2014/05/16 17:51:16 by mrachid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		push_swap

CPATH =		./srcs/

HPATH =		-I ./includes/

SRCS =		main.c \
			ft_fill.c \
			ft_lib.c \
			ft_diverse.c \
			ft_tools.c \
			ft_putchar.c \
			ft_hearts.c 

OBJS =		$(SRCS:.c=.o)

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

%.o:		$(CPATH)%.c
			@$(CC) -c $< $(CFLAGS) $(HPATH)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all
