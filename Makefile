NAME	=	libft.a
HEAD	=	include/libft.h
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra -g
SRCS	=	srcs/ft_atoi.c srcs/ft_bzero.c  srcs/ft_calloc.c srcs/ft_isalnum.c srcs/ft_isalpha.c \
                    srcs/ft_isascii.c srcs/ft_isdigit.c srcs/ft_isprint.c srcs/ft_itoa.c srcs/ft_memchr.c \
                    srcs/ft_memcmp.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memset.c \
                    srcs/ft_putchar_fd.c srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c srcs/ft_putstr_fd.c \
                    srcs/ft_split.c srcs/ft_strchr.c srcs/ft_strdup.c srcs/ft_striteri.c srcs/ft_strjoin.c \
                    srcs/ft_strlcat.c srcs/ft_strlcpy.c srcs/ft_strlen.c srcs/ft_strmapi.c srcs/ft_strncmp.c \
                    srcs/ft_strnstr.c srcs/ft_strrchr.c srcs/ft_strtrim.c srcs/ft_substr.c srcs/ft_tolower.c \
                    srcs/ft_toupper.c srcs/ft_check_var.c srcs/ft_itoa_pf.c srcs/ft_printchar.c \
					srcs/ft_printhex.c srcs/ft_printnbr.c srcs/ft_printstr.c srcs/ft_printunbr.c srcs/ft_printf.c \
					srcs/ft_printptr.c 
BONSRCS	=	bon_srcs/ft_lstnew.c bon_srcs/ft_lstadd_front.c bon_srcs/ft_lstsize.c bon_srcs/ft_lstlast.c bon_srcs/ft_lstadd_back.c \
					bon_srcs/ft_lstdelone.c bon_srcs/ft_lstiter.c bon_srcs/ft_lstmap.c bon_srcs/ft_lstclear.c
OBJS	=	${SRCS:.c=.o}
BONOBJS	=	${BONSRCS:.c=.o}
RM		=	rm -f

.c.o:
		$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME)	:	$(SRCS) ${OBJS} ${HEAD}
	ar rcs ${NAME} ${OBJS}

bonus	:	${OBJS} ${BONOBJS} ${HEAD}
	ar rcs ${NAME} ${OBJS} ${BONOBJS}	

all		:	$(NAME)

clean	:	
	${RM} ${OBJS} ${BONOBJS}

fclean	:	clean
	$(RM) $(NAME)

re	:	fclean ${OBJS}
	ar rcs ${NAME} ${OBJS}

.PHONY	:	all bonus clean cleanbonus fclean re
