# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcauchy- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 17:49:22 by mcauchy-          #+#    #+#              #
#    Updated: 2024/10/06 21:07:39 by lantona          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	rush_02.c utils.c srcs.c ft_split.c parse.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	rush-02

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror

DEBUG	=	-g3 -fsanitize=address

RM	=	/bin/rm -rf

HEADER	=	rush_02.h

all:		$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) $(DEBUG) -o $(NAME) $(OBJS)

%.o	:	%.c	$(HEADER)
		$(CC) $(CFLAGS) $(DEBUG) -o $@ -c $<

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
