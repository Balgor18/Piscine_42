
SRCS	= main.c file.c str.c error.c verif.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:
	${CC} -o ${NAME} ${SRCS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all
