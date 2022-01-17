SRCS	= main.c

SRCSA	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c

HEAD	= libft.a

OBJS	= ${SRCS:.c=.o}

OBJSA	= ${SRCSA:.c=.o}

NAME	=	libft
CC		= 	gcc
RM		= 	rm -f

AR		=	ar -crs

CFLAGS	= 	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

edit:		${HEAD}

${NAME}:	${OBJS}
			${CC} ${HEAD} -o ${NAME} ${OBJS}

all:		${NAME}

clean:	
			${RM} ${OBJS}
			${RM} ${OBJSA}

fclean:		clean
			${RM} ${NAME}
			${RM} ${HEAD}

re:			fclean all

${HEAD}:	${OBJSA}
			${AR} ${HEAD} ${OBJSA}
