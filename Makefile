# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 15:48:15 by anmohamm          #+#    #+#              #
#    Updated: 2023/03/01 18:04:12 by anmohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

.PHONY: all clean fclean re

CFLAGS := -Wall -Werror -Wextra

SRCS := \
	ft_printf.c ft_putchar.c ft_putstr.c ft_pointer.c ft_putnbr.c ft_putnbru.c \

OBJS := $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		ar -rcs $(NAME) $(OBJS)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all