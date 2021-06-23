# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/23 12:57:35 by amorcill          #+#    #+#              #
#    Updated: 2021/06/23 15:28:05 by amorcill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# compile with the flags and include the header .h with -c
CFLAG = -Wall -Werror -Wextra -c

# SRC	= 	ft_memset.c test_memset.c \
#		ft_strlen.c test_strlen.c \

all: $(NAME)

$(NAME):
	gcc $(CFLAG) ft_*.c
	ar -crs $(NAME) *.o
	ar -t $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all