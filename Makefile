# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/28 11:53:10 by flvejux           #+#    #+#              #
#    Updated: 2025/10/28 16:10:09 by flvejux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putnbr_hexa.c \
		ft_putstr.c \
		ft_printf.c \
		ft_putnbr.c \
		ft_putpoint.c \
		ft_strlen.c \

OBJS = $(SRCS:.c=.o)


AR = ar rcs

all : $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(NAME) Created succesfully"

.c.o :
	@$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	@rm -f $(OBJS)
	@echo "cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "fcleaned"

re: fclean all

.PHONY: all clean fclean re bonus