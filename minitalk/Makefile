# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsahin <zsahin@student.42istanbul.com.tr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 15:24:37 by zsahin            #+#    #+#              #
#    Updated: 2022/12/09 15:24:38 by zsahin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	=	minitalk
SERVER	=	server
CLIENT	=	client

SRC_S	=	server.c
SRC_C	=	client.c
OBJ_S	=	server.o
OBJ_C	=	client.o

LIBFTPRINTF		=	ft_printf/libftprintf.a
LIBFTPRINTF_DIR	=	ft_printf

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

all: $(NAME)

$(NAME):$(LIBFTPRINTF) $(SERVER) $(CLIENT)

$(SERVER):$(OBJ_S)
	@$(CC) $(CFLAGS) $(LIBFTPRINTF) -o $@ $<

$(CLIENT): $(OBJ_C)
	@$(CC) $(CFLAGS) $(LIBFTPRINTF) -o $@ $<

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFTPRINTF):
	@make -C $(LIBFTPRINTF_DIR)

clean:
	@make clean -C $(LIBFTPRINTF_DIR)
	@$(RM) $(OBJ_S) $(OBJ_C)

fclean: clean
	@make fclean -C $(LIBFTPRINTF_DIR)
	@$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re
