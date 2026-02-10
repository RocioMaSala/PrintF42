# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romarti2 <romarti2@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/16 11:54:06 by romarti2          #+#    #+#              #
#    Updated: 2026/02/10 14:02:08 by romarti2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = 	ft_hexa.c\
		ft_printchar.c\
		ft_printpunt.c\
		ft_putnbr.c\
		ft_hexamay.c\
		ft_printf.c\
		ft_printstring.c\
		ft_uint.c\


OBJ = $(SRC:.c=.o)

all: ${NAME}

${NAME}: ${OBJ}
	@ar rcs ${NAME} ${OBJ}

%.o: %.c Makefile ft_printf.h
	@echo "Compiling: $<"
	@${CC} ${CFLAGS} -c $< -o $@

clean:

	@rm -f ${OBJ}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re 
