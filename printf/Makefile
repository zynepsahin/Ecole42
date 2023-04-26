# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 13:45:35 by zsahin            #+#    #+#              #
#    Updated: 2022/08/18 13:45:36 by zsahin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_printf.c put_char.c put_str.c put_nbr.c \
		put_uint.c put_hex.c put_ptr.c

OBJ	=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a
RM		=	rm -rf
AR		=	ar -rcs

all: $(NAME)

.c.o:
	$(CC) -c $(CFLAGS) $<

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
