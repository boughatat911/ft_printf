NAME=libftprintf.a

CC=cc

CFLAGS=-Wall -Wextra -Werror

AR=ar cr

RM=rm -f

SRCS=
OBJS= $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME)

%.o : %.c ft_printf.h
	$(CC) -c $(CFLAGS) $< -o $@

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : fclean all