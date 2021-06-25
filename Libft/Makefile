# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/23 12:57:35 by amorcill          #+#    #+#              #
#    Updated: 2021/06/25 09:20:22 by amorcill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# IMPORTANT: Execute "$make all" in the same folder /Libft, in the other case, you get an error.

NAME = libft.a

# compile with the flags and include the header .h with -c
CFLAG = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	gcc $(CFLAG) ft_*.c
	ar -crs $(NAME) *.o
	ar -t $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)