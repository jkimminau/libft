# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 19:11:37 by jkimmina          #+#    #+#              #
#    Updated: 2018/02/25 23:07:44 by jkimmina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./

SRC =	ft_atoi.c			\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_memalloc.c		\
		ft_memdel.c			\
		ft_strcat.c			\
		ft_strchr.c			\
		ft_strcmp.c			\
		ft_strcpy.c			\
		ft_strdup.c			\
		ft_strlcat.c		\
		ft_strlen.c			\
		ft_strncat.c		\
		ft_strncmp.c		\
		ft_strncpy.c		\
		ft_strnstr.c		\
		ft_strrchr.c		\
		ft_strstr.c			\
		ft_tolower.c		\
		ft_toupper.c		\

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
