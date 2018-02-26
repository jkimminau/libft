# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 19:11:37 by jkimmina          #+#    #+#              #
#    Updated: 2018/02/25 23:11:35 by jkimmina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./

SRC =	*.c

OBJ =	$(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@echo "Making..."
	@gcc -c -Wall -Werror -Wextra -I $(HEADER) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@echo "Cleaning..."
	@/bin/rm -f $(OBJ) srcs/*.gch

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
