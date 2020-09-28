#INCLUDE "rush02.h"

SRCS	= main.c file.c str.c error.c verif.c split.c select.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${SRCS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
