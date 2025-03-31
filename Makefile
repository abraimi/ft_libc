NAME=ft_libc.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
BUILDDIR=build
SRCS= 	ft_atoi.c 				ft_bzero.c 			ft_calloc.c 		ft_isalnum.c \
		ft_isalpha.c 			ft_isascii.c 		ft_isdigit.c 		ft_isprint.c \
		ft_itoa.c 				ft_memchr.c 		ft_memcmp.c			ft_memcpy.c \
		ft_memmove.c			ft_memset.c 		ft_printf.c			ft_printhex_printf.c\
		ft_printptr_printf.c 	ft_putchar_fd.c 	ft_putchar_printf.c ft_putendl_fd.c \
		ft_putnbr_fd.c			ft_putnbr_printf.c 	ft_putstr_fd.c 		ft_putstr_printf.c \
		ft_split.c 				ft_strchr.c			ft_strdup.c 		ft_striteri.c \
		ft_strjoin.c 			ft_strlcat.c		ft_strlcpy.c 		ft_strlen.c \
		ft_strmapi.c			ft_strncmp.c		ft_strnstr.c		ft_strrchr.c \
		ft_strtrim.c			ft_substr.c			ft_tolower.c 		ft_toupper.c \
		get_next_line.c 		ft_strcmp.c			ft_lsts.c			ft_lstclear.c

OBJS= $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

all: $(BUILDDIR) $(NAME)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(NAME): $(OBJS)
	$(AR) rsc $(NAME) $(OBJS)

$(BUILDDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILDDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

