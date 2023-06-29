# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 18:03:57 by pkaolim           #+#    #+#              #
#    Updated: 2023/06/29 14:45:04 by pkaolim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

INC = includes/ft.h

OBJ =  $(SRCS:.c=.o)

all: libft.a

libft.a: $(OBJ)
	ar rcs libft.a $(OBJ)
	ranlib libft.a

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(INC) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all