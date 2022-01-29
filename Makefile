NAME		=	libftprintf.a
INCL		=	ft_printf.h
SRCS		=	ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_strchri.c ft_putptr.c ft_putunbr.c ft_printf.c

OBJS		=	$(patsubst %.c,%.o,$(SRCS))
DEPS		=	$(patsubst %.c,%.d,$(SRCS))
CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra -MD
RM			=	rm -rf

override		OBJS_ALL ?= $(OBJS)
override		DEP_ALL ?= $(DEPS)

.c.o:
				$(CC) $(CFLAGS) -I $(INCL) -c $< -o ${<:.c=.o}

$(NAME):		$(OBJS_ALL) $(INCL)
				ar rcs $(NAME) $(OBJS_ALL) $?
				ranlib $(NAME)

all:			$(NAME)

clean:
				$(RM) $(OBJS) $(DEPS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:		all clean fclean re