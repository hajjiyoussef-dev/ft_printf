NAME = libftprintf.a
SRC = ft_putchar.c

OBJC = ${SRC:.c=.o}
AR = ar -rc
RM = rm -f
CC = CC -Wall -Wextra -Werror 


%.o : %.c libftprintf.h
	${CC} -c $< -o $@ 

${NAME} : ${OBJC}
	${AR} ${NAME} ${OBJC}

all: ${NAME}

clean: 
	${RM} ${OBJC}

fclean: clean
	${RM} ${NAME}

re: fclean all 

.PHONY: fclean clean all re
