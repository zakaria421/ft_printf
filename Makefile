NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC =	ft_printf.c\
		ft_putchar.c\
		ft_puthexnbr.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_putunsinbr.c\
		ft_putherlownbr.c\

OBJECT = $(SRC:.c=.o)


all : ${NAME}

${NAME} : ${OBJECT}
	ar -rc ${NAME} ${OBJECT}

clean :
	${RM} ${OBJECT}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY:  all clean fclean re
