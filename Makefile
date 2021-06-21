# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/02 20:19:09 by hnewman           #+#    #+#              #
#    Updated: 2021/02/14 15:21:25 by hnewman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c	ft_bzero.c	ft_memcpy.c	ft_memccpy.c	ft_memmove.c	ft_memchr.c	ft_memcmp.c	ft_strlen.c	ft_strlcpy.c	ft_strlcat.c	\
ft_strchr.c	ft_strrchr.c	ft_strnstr.c	ft_strncmp.c	ft_atoi.c	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	\
ft_isprint.c	ft_toupper.c	ft_tolower.c	ft_strdup.c	ft_calloc.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	\
ft_substr.c	ft_strjoin.c	ft_strtrim.c	ft_strmapi.c	ft_itoa.c	ft_split.c	get_next_line.c	\

SRCS_B = ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c	ft_lstclear.c	ft_lstdelone.c	ft_lstiter.c	\
ft_lstmap.c	\

HEADER = libft.h

OBJS = ${SRCS:.c=.o}

OBJS_B = ${SRCS_B:.c=.o}

NAME = libft.a  

CC = @gcc
 
CFLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	${OBJS}
			@ar rcs	$(NAME)	${OBJS}

%.o:		%.c
			${CC} ${CFLAGS} -c $< -o $@

bonus:		${OBJS} ${OBJS_B}
			@ar rcs ${NAME} ${OBJS} ${OBJS_B}

clean:
			@rm -f ${OBJS} ${OBJS_B}

fclean:		clean

			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus


