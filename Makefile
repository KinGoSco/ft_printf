NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_hexalower.c  \
		ft_hexaupper.c ft_ptr.c
		
OBJS = ${SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
		ar -rc ${NAME} ${OBJS}
${OBJS} : ${SRCS}
		cc ${CFLAGS} ${SRCS} -c

 clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all
