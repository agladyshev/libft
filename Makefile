.PHONY: all clean fclean re 

BONUS		= $(wildcard ft_lst*.c)

FULL		= $(wildcard ft_*.c)

SRCS		= $(filter-out $(BONUS), $(FULL))

OBJS_CORE	= ${SRCS:.c=.o}

OBJS_FULL	= ${FULL:.c=.o}

HEADER		= libft.h

NAME		= libft.a

CC			= gcc

RM			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

${NAME}:	${OBJS_CORE}
			ar rc ${NAME} ${OBJS_CORE}

bonus:		${OBJS_FULL}
			ar rc ${NAME} ${OBJS_FULL}

all:		${NAME}

clean:
			${RM} ${OBJS_FULL}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
