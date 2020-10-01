NAME 	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
HEAD	= ./includes
OBJS	= ${SRCS:.c=.o}
GCC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${GCC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS} ${HEAD}
		ar rc ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
