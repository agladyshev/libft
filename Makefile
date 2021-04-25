.PHONY: all clean fclean re 

SRCS		= $(wildcard *.c)

OBJS		= ${SRCS:.c=.o}

HEADER		= libft.h

NAME		= libft.a

CC			= gcc

RM			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
