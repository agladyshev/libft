# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stiffiny <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/06 14:36:27 by stiffiny          #+#    #+#              #
#    Updated: 2021/05/06 17:30:41 by stiffiny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

LIST		=	ft_atoi.c ft_bzero.c ft_calloc.c\
				ft_isalnum.c ft_isalpha.c ft_isascii.c\
				ft_isdigit.c ft_isprint.c ft_itoa.c\
				ft_memccpy.c ft_memchr.c ft_memcmp.c\
				ft_memcpy.c ft_memmove.c ft_memset.c\
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
				ft_putstr_fd.c ft_split.c ft_strchr.c\
				ft_strdup.c ft_strjoin.c ft_strlcat.c\
				ft_strlcpy.c ft_strlen.c ft_strmapi.c\
				ft_strncmp.c ft_strnstr.c ft_strrchr.c\
				ft_strtrim.c ft_substr.c ft_tolower.c\
				ft_toupper.c

LIST_BONUS	=	ft_lstadd_back.c ft_lstadd_front.c\
				ft_lstclear.c ft_lstdelone.c\
				ft_lstiter.c ft_lstlast.c\
				ft_lstmap.c ft_lstnew.c\
				ft_lstsize.c

OBJS		= $(patsubst %.c,%.o,$(LIST))

OBJS_BONUS	= $(patsubst %.c,%.o,$(LIST_BONUS))

D_FILES		= $(wildcard ft*.d)

CC			= gcc

OPTFLAGS	= -O2

CFLAGS 		= -Wall -Wextra -Werror

RM			= rm -f

all	:		$(NAME)

$(NAME)	:	$(OBJS) 
			ar rcs $(NAME) $?

%.o : %.c
	$(CC) $(CFLAGS) $(OPTFLAGS) -c $< -o ${<:.c=.o} -MD

include	$(wildcard $(D_FILES))

bonus	:
			@make OBJS="${OBJS_BONUS}" all
clean	:
			$(RM) $(OBJS) $(OBJS_BONUS) $(D_FILES)

fclean	:	clean
			$(RM) $(NAME)

re	:		fclean all

.PHONY: all clean fclean re bonus
