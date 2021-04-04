# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/04 16:48:31 by rvan-aud          #+#    #+#              #
#    Updated: 2021/04/04 16:48:31 by rvan-aud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c			\
			ft_bzero.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memccpy.c	\
			ft_memcpy.c		\
			ft_memset.c		\
			ft_strcat.c		\
			ft_strchr.c		\
			ft_strcmp.c		\
			ft_strcpy.c		\
			ft_strdup.c		\
			ft_strlen.c		\
			ft_strncat.c	\
			ft_strncmp.c	\
			ft_strncpy.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_strstr.c		\
			ft_tolower.c	\
			ft_toupper.c	\

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

OBJS	= ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re