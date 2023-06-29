# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/29 03:54:12 by pkaolim           #+#    #+#              #
#    Updated: 2023/06/29 14:17:51 by pkaolim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/ bin / bash
cc -c -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_swap.c ft_strcmp.c ft_strlen.c
ar rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o